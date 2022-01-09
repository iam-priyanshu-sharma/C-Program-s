#include<stdio.h> 
#include<stdlib.h> 
#include<conio.h>
int main()
    {
        int *ptr; 
        int n;
        printf("\nHow many integers do you want to enter:");
        scanf("%d",&n);
        ptr =(int *)calloc(n,sizeof(int)); 
        for(int i=0;i<n;i++)
            {
                printf("\nEnter the value of %d element:",i); 
                scanf("%d",&ptr[i]);
            }  
        for(int i=0;i<n;i++)
            {
                printf("\nThe value of %d element is:%d",i,ptr[i]); 
            }
        return 0;
    }