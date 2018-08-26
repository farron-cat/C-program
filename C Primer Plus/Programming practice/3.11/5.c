/***********************************************************************/
/*                              practice 5                             */
/***********************************************************************/
#include <stdio.h>
int main (void)
{
  float age;

  printf("Please enter your age:\n");
  scanf("%f\n",&age);

  getchar();

  printf("your age in second is:%fs\n",age * 3.156e7);

  return 0;
}
