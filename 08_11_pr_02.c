#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
    {
        char st1[34];
        char st2[34];
        char c;
        int i=0;
        printf("Enter the value of first string:");
        scanf("%s",st1); 
        printf("\nEnter the value of second string character by character:"); 
        while(c!='\n')
            { 
                fflush(stdin);
                scanf("%c",&c); 
                st2[i]=c;
                i++;
            }
        st2[i-1]='\0';
        printf("\nThe value of st1 is %s",st1);
        printf("\nThe value of st2 is %s",st2);
        printf("\nstrcmp for these strings returns %d",strcmp(st1,st2));
        return 0;
    }