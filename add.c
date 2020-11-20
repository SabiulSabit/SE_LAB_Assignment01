#include <stdio.h>

int main()
{
   int a,b,sum;

   printf("Please Enter the 1st Number: ");
   scanf("%d",&a);
   printf("Please Enter the 2nd Number: ");
   scanf("%d",&b);

   sum=a+b;

   printf("\nThe sum of %d and %d is: %d\n",a,b,sum);

   return 0;
}