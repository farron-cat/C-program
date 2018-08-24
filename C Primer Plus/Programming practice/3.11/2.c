/***********************************************************************/
/*                              practice 2                             */
/***********************************************************************/
#include <stdio.h>
int main (void)
{
  char ch;

  printf("Please enter a number:",);
  scanf("%d\n",&ch);
  getchar();
  printf("The number %d in ASCII is %c\n",ch,ch);

  return 0;
}
