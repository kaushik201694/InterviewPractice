#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include <pthread.h>

sem_t s;
pthrad_t tid[2];
unsigned int shared_data[] = {45, 23, 21, 56, 44, 7, 89,90};
unsigned int rc;
int len = sizeof(shared_data)/sizeof(shared_data[0]);

void *even(void *arg)
{
    rc = sem_wait(&s);
    if(rc)
        printf("Semaphore failed");
    while(i<len)
    {
        if()
    }
}

int main()
{
    sem_init(&s, 0, 1);
    pthread_create(&tid[0], 0, &even, 0);
    pthread_create(&tid[0], 0, &odd, 0);

    pthread_join(tid[0], NULL);
    pthread_join(tid[0], NULL);

    sem_destroy(&s);
}