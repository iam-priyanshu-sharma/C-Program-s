#include<stdio.h> 
#include<stdlib.h> 
#include<conio.h>
int main()
    {
        int *ptr;
        int *ptr2;
        ptr = (int *)malloc(600 * sizeof(int)); 
        for(int i=0;i<600;i++)
            {
                ptr2 =(int *)malloc(600000*sizeof(int)); 
                printf("\nEnter the value of %d element:",i); 
                scanf("%d",&ptr[i]);
                free(ptr2);
            }
        for(int i=0;i<6;i++)
            {
                printf("\nThe value of %d element is:%d",i,ptr[i]); 
            }
        return 0;
    }