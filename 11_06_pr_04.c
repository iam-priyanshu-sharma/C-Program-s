#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
    {
        int *ptr;
        ptr = (int*)malloc(5*sizeof(int));
        for(int i=0;i<5;i++)
            {
                printf("\nEnter the value of %d element:",i);
                scanf("%d",&ptr[i]);
            }
        for(int i=0;i<5;i++)
            {
                printf("\nThe value of %d element is:",i,ptr[i]); 
            }
        ptr = realloc(ptr,10*sizeof(int));
        for(int i=0;i<10;i++)
            {
                printf("\nEnter the value of %d element:",i);
                scanf("%d",&ptr[i]);
            }
        for(int i=0;i<10;i++)
            {
                printf("\nThe value of %d element is:",i,ptr[i]); 
            }
        return 0;
    }