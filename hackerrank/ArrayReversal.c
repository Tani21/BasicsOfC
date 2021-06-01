#include <stdio.h>
#include <stdlib.h>

void reverse(int a[], int b)
{
    for(int i=0; i<b/2; i++)
{
    int temp;
    temp = a[i]; 
    a[i] = a[b-i-1];
    a[b-i-1] = temp;
}
    
}

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

reverse(arr, num);



    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
