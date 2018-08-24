/***********************************************************************/
/*                              practice 1                             */
/***********************************************************************/

#include <stdio.h>

int main(void)
{
  int num1 = 2147483647;
  double num2 = 3.4028235E38;
  double num3 = 1.4E-45;

  printf("%d %d\n",num1,num1+1);
  printf("%lf %lf\n",num2,num2*100.0f);
  printf("%lf %lf\n",num3,num3 * 100.0f);

  return 0;
}
