/* print2.c */
#include <stdio.h>
int main (void)
{
  unsigned int un = 3000000000;
  short end = 200;
  long big = 65537;
  long long verybig =12345678908642;

  printf("un = %u and not %d\n",un,un);
  printf("end = %hd and %d\n",end,end);
  printf("big = %ld and not %hd\n",big,big);
  printf("verybig = %lld and not %ld\n",verybig,verybig);

  return 0;
}

// result:
//       un = 3000000000 and not -1294967296
//       end = 200 and 200
//       big = 65537 and not 1
//       verybig = 12345678908642 and not 194289938
