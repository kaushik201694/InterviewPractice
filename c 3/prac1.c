#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 16;
    a = ~a;
    printf("%d\n", a);

    int (*arr)[5];
    int b[] = {8, 67,43,2, 5};
    arr = &b;
    printf("%d", *(*arr+2));

    FILE *fptr;
    fptr = fopen("C:\\Users\\kchatterjee\\Documents\\random.txt", "a");

    if(fptr == NULL)
    {
        printf("ERROR in opening the file\n");
        exit(-1);
    }

    char *str = malloc(50*sizeof(char));

    printf("Enter the string that you want to enter in the file\n");
    scanf("%s", str);
    fprintf(fptr, "%s", str);
    fclose(fptr);

    free(str);

    return 0;
}