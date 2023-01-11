#include<stdio.h>
#include<conio.h>
int main()
    {
        int marks[4];
        int *ptr;
        ptr=marks;
        for(int i=0;i<4;i++)
            {
                printf("Enter the value of marks for student %d:",i+1);
                scanf("%d",ptr);
                ptr++;
            }
        for(int i=0;i<4;i++)
            {
                printf("\nThe value of marks for student %d is %d",i+1,marks[i]);  
            }
        return 0;
    }