#include<stdio.h>
#include<conio.h>
int main()
    {
        FILE *fptr;
        int number = 45;
        fptr = fopen("generated.txt","w");
        fprintf(fptr,"\nThe number is %d",number);
        fprintf(fptr,"\nThanks for using fprintf",number);
        fclose(fptr);
        return 0;
    }