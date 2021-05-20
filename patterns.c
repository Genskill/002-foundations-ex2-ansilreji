#include <stdio.h>
#include "cs50.h"
int main(void) 
{ 
int pattern = get int("Enter the pattern number ");
int row = get int(" Enter number of rows");
if(pattern==1) 
{
for(int i=1; i<=row; i++) 
{ for(int s=0; s<=i; s++) 
printf("#");
printf("\n");
}
}
else if(pattern==2) 
{
for(int i=1; i<=row; i++)
{
for(int j=1; j <= row -i; j--)
printf(" "); }{
for(int k=1; k <= i; k++)
printf("#");
printf("\n") ;
}
}
}
