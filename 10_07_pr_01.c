#include<stdio.h>
#include<conio.h>
int main()
    {
        int a,b,c;
        FILE *ptr;
        ptr = fopen("pr01.txt","r");
        fscanf(ptr,"%d%d%d",&a,&b,&c);
        printf("\nThe values of a,b and c is %d,%d and %d",a,b,c);
        return 0;
    }