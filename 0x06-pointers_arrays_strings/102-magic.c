#include <stdio.h>

int main(void)
{
  int n;
  int a[2];
  int *p;

  a[2]  = 98
  p = &n
	 /*
	 * line of code is written here
	 *  Remember:
	 *  - you are not allowed to use a
	 *  - you are not allowed to modify p
	 *  - only one statement
	 *  - you are not allowed to code anything else than this line of code
   */
  *(p + 2) = 98;
  /* this to prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
