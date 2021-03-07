#include <stdio.h>

int main()
{
    int n , m ;
    printf("Enter the upper limit ");
    scanf("%d",&m);
    printf("Enter the lower limit ");
    scanf("%d" , &n);
    printf("The numbers between n and m are ");
    for(int i = n+1 ; i<m ;i++){
        printf("%d" , i);
    }
    return 0 ;
}
