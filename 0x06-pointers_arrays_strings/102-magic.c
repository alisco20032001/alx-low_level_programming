#include <stdio.h>

int main(void)
{
  int n;
  int a[2];
  int *p;

  a[2] = 100;
  p = &n;
  /**
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(p + 5) = 98;
  /* this to prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
