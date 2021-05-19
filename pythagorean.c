#include <stdio.h>
#include "cs50"
int main(void) 
  {
  int a, b;
  int n = get int("Enter the number ") ;
for(a=1;a<=100;a++)

{

    for(b=1;b<=100;b++)

        if(a<b && a*a + b*b == n*n)

        {

            printf("(%d, %d, %d)\n",a,b,n);

        }

        else

        

      {

            printf("impossible \n");

        }

  }

  }




        
