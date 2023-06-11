#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

sem_t s;

void *child(void *arg)
{
    printf("Child Begins");
    sem_post(&s);
    printf("CHild Ends");
}

int main()
{
    sem_init(&s, 0, 0);
    printf("Parent Begins");
    pthread_t p;
    pthread_create(&p, NULL, child, NULL);
    sem_wait(&s);
    printf("Parent Ends");
    return 0;
}