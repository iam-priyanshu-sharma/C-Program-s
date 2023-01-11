#include<stdio.h>
#include<conio.h>
int main()
    {
        FILE *ptr;
        int num;
        int num2;
        ptr = fopen("LS.txt","r");
        if(ptr == NULL)
            {
                printf("\nThis file does not exist.");
            }
        else
            { 
                fscanf(ptr,"%d",&num);
                fscanf(ptr,"%d",&num2);
                fclose(ptr);
                printf("\nThe value of num is %d.",num);
                printf("\nThe value of num2 is %d.",num2);
            }
        return 0;
    }