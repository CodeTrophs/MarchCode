#include <stdio.h>
#include <conio.h>
int main()
{
    int a,count=0;
    printf("Enter Your Number\n");
    scanf("%d",&a);
    while(a!=0)
    {
        a/=10;
        count++;
    }
    printf("Number of digits in your number:%d",count);
    return 0;
}
