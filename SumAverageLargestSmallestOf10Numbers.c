/*Program to input 10 numbers and find their sum,average,largest no. and smallest no.*/
#include<stdio.h>
#include<conio.h>
int  main()
     {
       int n,i,sum=0,l,s;
       float avg;
       printf("Enter 10 numbers:");
       for(i=1;i<=10;i++)
           {
             scanf("%d",&n);
             sum=sum+n;
             if(i==1)
                l=s=n;
             else
                  {
                   if(n>1)
                      l=n;
                   if(n<s)
                      s=n;
                  }
           }
       avg=sum/10.0;
       printf("\nSum of numbers:%d",sum);
       printf("\nAverage of numbers:%f",avg);
       printf("\nLargest numbers=%d",l);
       printf("\nSmallest number=%d",s);
       return 0;
     }