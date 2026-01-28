#include<stdio.h>
int main()
{
    int n ;
    printf(" enter any num 0to ");
    scanf ("%d", &n);
    if (n ==0 ) 
    {
        printf(" number is zero ");

    }   



    else if(  n==3 || n==5 || n==7 || n==9)  

     { printf(" number is odd");
     }
     else  {
         printf(" number is  even ");
     }
     return 0;
     }
