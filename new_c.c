#include<stdio.h>

int main()
{
    int n;

    printf("Please Enter Any Number: ");
    scanf("%d",&n);

    if(n<0)
    {
        printf("\nThis is A Negative Number.\n");
    }
    else if(n>=0)
    {
        printf("\nThis is A Positive Number.\n");
    }

    return 0;
}
