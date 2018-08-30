/***********************************************************************/
/*                              practice 1                             */
/***********************************************************************/
#include <stdio.h>
int main(void)
{
  char first_name[40];
  char last_name[40];

  printf("Please enter your first name :");
  scanf("%s\n",&first_name);

  printf("Please enter your last name :");
  scanf("%s\n",&last_name);

  printf("hi,%s %s\n",first_name,last_name);

  return 0;
}
