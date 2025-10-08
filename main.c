#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a, int b)
{
 	 
 	 return(a+b);
}
	
int square(int n)
{
 	return(n*n);
}

int get_max(int x, int y)
{
 	if (x>y)
 	 return x;
 	else
 	 return y;
	 
}

int main(void)
{
  
  printf("sum two result is %i\n", sumTwo(2,3));
  printf("square result is %i\n", square(5));
  printf("getmax result is %i\n", get_max(10,13));   
  
  
  system("PAUSE");	
  return 0;
}
