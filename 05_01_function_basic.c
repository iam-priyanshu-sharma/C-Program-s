#include<stdio.h>
#include<conio.h>
void display();
int main()
    {
        int a;
        printf("Initializing display function\n");
        display();
        printf("Display function finished its work\n");
        return 0;
    }
void display()
    {
        printf("This is display\n"); 
    }