#include<stdio.h>
#include<conio.h>
int main()
    {
        float f=3.4;
        float *ptr=&f;
        printf("The value of ptr is %u\n",ptr);
        ptr=ptr+1;
        printf("The value of ptr is %u\n",ptr);
        return 0;
    }