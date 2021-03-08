#include <stdio.h>
int main() {
    int n;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0)
 {
        n /= 10;    
        ++count;
 }
 printf("Number of digits in the given number are : %d", count);
}