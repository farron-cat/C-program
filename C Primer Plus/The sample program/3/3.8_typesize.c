/* typesize */
#include <stdio.h>
int main (void)
{
  /* %zd need c99 */

  printf("Type int has a size of %zd bytes.\n",sizeof(int));
  printf("Type char has a size of %zd bytes.\n",sizeof(char));
  printf("Type long has a size of %zd bytes\n",sizeof(long));
  printf("Type long long has a size of %zd bytes\n",sizeof(long long));
  printf("Type double has a size of %zd bytes\n",sizeof(double));
  printf("Type long double has a size of %zd bytes\n", sizeof(long double));

  return 0;
}

// result:
//       Type int has a size of 4 bytes.
//       Type char has a size of 1 bytes.
//       Type long has a size of 8 bytes.
//       Type long long has a size of 8 bytes.
//       Type double has a size of 8 bytes.
//       Type long double has a size of 16 bytes.
