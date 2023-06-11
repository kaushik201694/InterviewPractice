#include<stdio.h>
#include<stdlib.h>
int arr[10][10]= {0};

int numberOfPaths(int m, int n) 
{ 
    // If either given row number is first or given column 
    // number is first 
    if (m == 1 || n == 1) 
        return 1; 
        
    if(arr[m][n] == 0) {
        arr[m][n] = numberOfPaths(m - 1, n) + numberOfPaths(m, n - 1);  /*
																		  + numberOfPaths(m-1, n-1); --> we have to add this if diagonal movement is also allowed. 
																		*/
    }
    return  arr[m][n];
    
} 
  
int main() 
{ 
    printf("The Total number is paths are : %d",numberOfPaths(3, 3)); 
    return 0; 
} 

