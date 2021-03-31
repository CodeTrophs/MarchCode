#include<stdio.h>

int factorial(int n)
{
    if(n==1)
        return 1;

    else
        return n*factorial(n-1);
}

int main()
{
    int num;
    printf("Enter any number to find factorial: ");
    scanf("%d",&num);

    if(num<0)
        printf("Factorial does not exists.");
    else
        {  if(num==0)
             printf("Factorial of 0 is 1.");
           else
            printf("Factorial of %d is %d ", num,factorial(num));
        }

    return 0;
}