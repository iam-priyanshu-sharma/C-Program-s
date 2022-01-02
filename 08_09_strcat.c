#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
    {
        char st1[45]="Hello";
        char *st2="Priyanshu";
        strcat(st1,st2);
        printf("Now the st1 is %s",st1);
        return 0;
    }