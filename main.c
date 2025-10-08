#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
 	int res = 1;
 	int i;
 	for(i=1; i<=n; i++)
 	 res *= i;
 	return res;
}

int combination(int n, int r)
{
 	return(factorial(n)/(factorial(r)*factorial(n-r)));
 	
}

int get_integer(char c)
{
    int x;
    
	printf("%c: ", c);
    scanf("%d", &x);
    
    return(x);
}

int main()
{
  int sol;
  int n, r;
  n = get_integer('n');
  r = get_integer('r');
  sol = combination(n, r);
  printf("The Combination result is %d\n", sol);
  
  system("PAUSE");
  return 0; 
  
}
