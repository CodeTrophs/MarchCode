#include <stdio.h>
#include <conio.h>
int main ()
{
    int n,m,max;
    printf("ENTER TWO NUMMBERS\n");
    scanf("%d %d",&n,&m);
    printf("NATURAL NUMBERS BETWEEN %d and %d ARE:\n",n,m);
    if(n<m)
        max=m;
    else
        max=n;
    for(int i=1;i<max;i++)
     {
        if(i>n && i<m || i<n && i>m)
         printf("%d ",i);
     }
    return 0;
}
