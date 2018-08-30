/***********************************************************************/
/*                              practice 2                             */
/***********************************************************************/
#include <stdio.h>
int main (void)
{
  char name[40];

  printf("What's your name?\nPlease enter your name :");
  scanf("%s\n",name);

  printf("a.%s\n",name);
  printf("b.\"%20s\"\n",name);
  printf("c.\"%-20s\"\n",name);
  printf("d.%*s\n",name + 3);

  return 0;
}
