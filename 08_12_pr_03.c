#include<stdio.h>
#include<conio.h>
int strlen(char *st)
    {
        char *ptr=st;
        int len=0;
        while(*ptr!='\0')
            {
                len++;
                ptr++;
            }
        return len;
    }
int main()
    {
        char st[]="Priyanshu";
        int l=strlen(st);
        printf("\nThe length of this string is %d",l);
        return 0;
    }