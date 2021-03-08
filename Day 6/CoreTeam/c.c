#include <stdio.h>

int main ()
{
    int i, n, m, sum_all = 0, sum_even = 0;
    printf ("Enter the beginning number: ");
    scanf ("%d", &n);
    printf ("Enter the ending number: ");
    scanf ("%d", &m);
    for (i = n; i < m; i++){
        sum_all += i;
        if (i % 2 == 0){
    	sum_even += i;
    	}
    }
      printf ("Sum of all numbers:%d", sum_all);
      printf ("\nSum of all even numbers:%d", sum_even);
      return 0 ;
}
