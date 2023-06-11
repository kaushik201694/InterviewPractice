//Threads in C

/* Includes */
#include <unistd.h>     /* Symbolic Constants */
#include <sys/types.h>  /* Primitive System Data Types */ 
#include <errno.h>      /* Errors */
#include <stdio.h>      /* Input/Output */
#include <stdlib.h>     /* General Utilities */
#include <pthread.h>    /* POSIX Threads */
#include <string.h>     /* String handling */

pthread_t tid[2];
pthread_mutex_t lock;

void* evenPrint(void* num) {
    int a=*(int *)num;
    pthread_mutex_lock(&lock);
    if(a&1)
        pthread_mutex_unlock(&lock);
    else
        printf("%d is even\n",a);
    return 0;
}

void* oddPrint(void* num) {
    int a=*(int *)num;
    pthread_mutex_lock(&lock);
    if(a&1)
        printf("%d is odd\n",a);
    else
        pthread_mutex_unlock(&lock);
    return 0;    
}


int main() {
    
    int n;
    printf("Enter the size of the int array:");
    scanf("%d",&n);
    
    int arr[n],i;
    printf("\nNow enter the elements:\n");
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]);
    }
    
    if(pthread_mutex_init(&lock, NULL) != 0) {
        printf("\nMutex Init has failed\n");
        return 1;
    }
    
    i=0;
    int j,k;
    while(i<n) {
        if(j=pthread_create(&tid[0],NULL,evenPrint,(void *)arr[i])) {
            printf("First thread creation falied with value: %d\n",j);
        }
        if(k=pthread_create(&tid[1],NULL,oddPrint,(void *)arr[i])) {
            printf("Second thread creation falied with value: %d\n",k);
        }
        i++;
    }
    pthread_join(tid[0],NULL);
    pthread_join(tid[1],NULL);
    pthread_mutex_destroy(&lock);
    
    return 0;
}