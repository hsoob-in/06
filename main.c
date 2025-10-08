#include <stdio.h>
#include <stdlib.h>

void print_star(int n)
{
 	 int i;
 	 for(i=0; i<n; i++)
	  printf("*");
}
	 

int main(void)
{
  print_star(10);
  print_star(10);
  print_star(10);
  
  system("PAUSE");	
  return 0;
}
