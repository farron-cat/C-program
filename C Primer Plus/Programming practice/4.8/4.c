/***********************************************************************/
/*                              practice 4                             */
/***********************************************************************/
#include <stdio.h>
#define CM_PER_INCH (2.54)
int main (void)
{
  float height;
  char name[40];

  printf("what's your name?\n" );
  scanf("%s",&name);
  getchar();
  printf("hi,%s! how about your height?(inch)\n");
  scanf("%d\n",%height );
  printf("%s, your are %f feet\n",name,height );
  printf("or %f cm\n",height * CM_PER_INCH );

  return 0;
}
