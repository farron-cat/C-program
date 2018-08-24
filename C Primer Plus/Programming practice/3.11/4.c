/***********************************************************************/
/*                              practice 4                             */
/***********************************************************************/
#include <stdio.h>
int main (void)
{
  float numf = 0.0;

  printf("Enter a floating-point value: ");
  scanf("%f\n",&numf);

  getchar();

  printf("fixed-point natation: %f\n",numf);
  printf("exponential notation: %e\n",numf);
  printf("p notation: %a\n",numf );

  return 0;
}
