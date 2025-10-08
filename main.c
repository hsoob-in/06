#include <stdio.h>
#include <stdlib.h>

/*void func2(void)
{
 	 int x;
 	 printf("func2 x is at %p\n", &x);
}
*/

void func(int x)
{
 	 //int x;
 	 printf("func x is at %p\n", &x);
 	 //func2();
}
	 

int main(void)
{
  int x;
  printf("main x is at %p\n", &x); 
  func(x);
  
  system("PAUSE");	
  return 0;
}
