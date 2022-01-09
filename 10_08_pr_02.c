#include<stdio.h>
#include<conio.h>
int main()
    {
        FILE *ptr;
        int num;
        printf("\nEnter the integer you need the table of:");
        scanf("%d",&num);
        ptr = fopen("table.txt","w");
        for(int i=0;i<10;i++)
            {
                fprintf(ptr,"\n%d X %d = %d",num,i+1,num*(i+1));
            }
        fclose(ptr);
        printf("\nSuccessfully generated table of %d to table.txt",num);
        return 0;
    }