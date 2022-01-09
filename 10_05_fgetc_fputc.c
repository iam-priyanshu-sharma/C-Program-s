#include<stdio.h>
#include<conio.h>
int main()
    {
        FILE *ptr;
        ptr = fopen("putcdemo.txt","w");
        putc('c',ptr);
        putc('c',ptr);
        putc('c',ptr);
        fclose(ptr);
        return 0;
    }