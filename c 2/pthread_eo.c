#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

pthread_t tid[2];
unsigned int shared_data []= {23,45,67,44,56,78,91,102};
pthread_mutex_t mutex;
unsigned int rc;
int len=(sizeof(shared_data)/sizeof(shared_data[0]));
int i=0;

void* PrintEvenNos(void *ptr)
{
    rc = pthread_mutex_lock(&mutex);
    if(rc)
        printf("Mutex lock has failed\n");
    do
    {
       if(shared_data[i]%2 == 0)
       {
         printf("Even:%d\n",shared_data[i]);
         i++;
       } else {
          rc=pthread_mutex_unlock(&mutex);
       }
    } while(i<len);
}

void* PrintOddNos(void* ptr1)
{
    rc = pthread_mutex_lock(&mutex);
    if(rc)
        printf("Mutex lock has failed\n");
    do
    {
       if(shared_data[i]%2 != 0)
       {
         printf("Odd:%d\n",shared_data[i]);
         i++;
       } else {
          rc=pthread_mutex_unlock(&mutex);
       }
    } while(i<len);
}

void main(void)
{   
    pthread_create(&tid[0],0,&PrintEvenNos,0);
    pthread_create(&tid[1],0,&PrintOddNos,0);

    pthread_join(tid[0],NULL);
    pthread_join(tid[1],NULL);
}


/*
O/P

Odd:23
Odd:45
Odd:67
Even:44
Even:56
Even:78
Odd:91
Even:102


*/