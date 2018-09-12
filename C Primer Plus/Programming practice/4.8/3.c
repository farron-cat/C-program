/***********************************************************************/
/*                              practice 3                             */
/***********************************************************************/
#include <stdio.h>
int main (void)
{
  float num;

  printf("Please enter a float number\n", );
  scanf("%f\n",&num);
  printf("a. The input is %.2f or %e.\n",num,num );
  printf("Please enter another float number\n", );
  scanf("%f\n",&num);
  printf("b.The input is %+f or%+E.\n",num,num );

  return 0;
}
