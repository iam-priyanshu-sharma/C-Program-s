#include<stdio.h> 
#include<stdlib.h> 
#include<conio.h>
int main()
    {
        int *ptr; 
        ptr = (int *)calloc(6,sizeof(int));
        for(int i=0;i<6;i++)
            {
                printf("\nThe value of %d element is:%d",i,ptr[i]); 
            }
        return 0;
    }