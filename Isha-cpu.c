#include <stdio.h>
#include <conio.h>
int main()
{
    int n,m,max;
    printf("Enter two numbers\n");
    scanf("%d %d",&n,&m);
    if(n>m)
        max=n;
    else
        max=m;
        printf("Prime number between %d and %d are:\n",n,m);
    for(int i=1;i<max;i++)
    {
        if(i<n && i>m || i>n && i<m)
        {
            if(i%i==0)
            {
                if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0 || i==2 || i==3 || i==5 || i==7 )
                printf("%d ",i);
            }
        }
    }
    return 0;
}
