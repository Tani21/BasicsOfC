#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int max_number;
    scanf("%d", &max_number);    
    int arr[max_number];
    for(int i=0; i<max_number; i++)
    {
        scanf("%d", &arr[i]);   
    }
    
    int sum=0;
    for(int i=0; i<max_number; i++)
    {
        sum= sum+ arr[i];
    }
    
    printf("%d", sum);
    return 0;
}

