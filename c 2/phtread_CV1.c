#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cv = PTHREAD_COND_INITIALIZER;

pthread_t tid[2];

int i = 0,a;

void *fun1(void *arg) {
    
    int temp = *((int*) arg);
    
    printf("temp = %d\n", temp);
    
    pthread_mutex_lock(&lock);
    
    if(i == 0) {
        i=2;
        printf("waiting for CV\n");
        pthread_cond_wait(&cv, &lock);
    }
    else {
        a =i;
        printf("Signalling\n");
        pthread_cond_signal(&cv);
    }
    
    pthread_mutex_unlock(&lock); 
  
    printf("Returning thread\n"); 
  
    return NULL; 
}

int main()
{
    printf("Hello World\n");
    
    int a=3, b=4;
    
    pthread_create(&tid[0], NULL, &fun1, (void*)&a);
    pthread_create(&tid[1], NULL, &fun1, (void*)&b);
    
    pthread_join(tid[0],NULL);
    pthread_join(tid[1],NULL);

    return 0;
}

