/* badcount.c */
#include <stdio.h>
int main (void)
{
  int n = 4;
  int m = 5;
  float f = 7.0f;
  float g = 8.0f;

  printf("%d\n", n, m);
  printf("%d %d %d\n", n);
  printf("%d %d\n", f, g);

  return 0;
}

// result:  (in VS2017)
//       4
//       4 0 0
//       0 1075576832
      
