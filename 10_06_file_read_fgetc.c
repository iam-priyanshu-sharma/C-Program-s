#include<stdio.h>
#include<conio.h>
int main()
    {
        FILE *ptr;
        char c;
        ptr = fopen("getcdemo.txt","r");
        c = fgetc(ptr);
        while(c!=EOF)
            {
                printf("%c",c);
                c = fgetc(ptr);
            }
        return 0;
    }