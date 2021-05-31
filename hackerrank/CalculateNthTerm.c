#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) 
{
  int e, d;
  
  if(n==1)
    e=a;
  else if(n==2)
    e=b;
  else if(n==3)
    e=c;      
  else
  {
    for(int i=0; i<n-3; i++)
    {
      d = a + b + c;
      a=b;
      b=c;
      c=d;
    }
    e=d;
  }
  
  return e;
}

int main() 
{
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
