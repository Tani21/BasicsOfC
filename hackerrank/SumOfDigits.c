#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, sum=0, dividend, remainder;
    scanf("%d", &n);
    for(int i=0; i<5; i++)
    {
        remainder = n % 10;
        sum=sum+remainder;
        dividend = n /10;
        n = dividend;    
    }
    
    printf("%d", sum);
    return 0;
}
