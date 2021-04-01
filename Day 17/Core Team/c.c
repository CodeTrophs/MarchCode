#include <stdio.h>

int main() {
    int z , n , x=0 ,y=1;
    printf("Enter the numbers you want in the series: ");
    scanf("%d",&n); 
    printf("Fibonacci Series :");
    printf("%d %d ",x,y);
    while ((x+y)<n-1){
        z = x+y;
        printf("%d ",z);
        x = y ;
        y = z;
    }
    
    return 0 ;
}
