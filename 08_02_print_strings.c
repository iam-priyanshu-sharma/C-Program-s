#include<stdio.h>
#include<conio.h>
int main()
    {
        char str[]={'H','a','r','r','y','\0'};
        char *ptr=str;
        while(*ptr!='\0')
            {
                printf("%c",*ptr);
                ptr++;
            }
        return 0;
    }