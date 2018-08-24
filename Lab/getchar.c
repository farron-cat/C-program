/* getchar.c */
#include <stdio.h>
int main (void)
{
  char c;

  c = getchar();
  printf("%c",c);
  printf("%c", getchar());
  printf("%c", getchar());
  printf("%c", getchar());

  return 0;
}
