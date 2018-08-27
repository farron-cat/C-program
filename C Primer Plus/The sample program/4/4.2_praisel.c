/* praisel.c */
#include <stdio.h>
#define PRAISE "You are extraorinary being"
int main (void)
{
  char name[40];

  printf("What's your name?\n");
  scanf("%s\n",name);
  printf("Hello, %s. %s\n",name,PRAISE);

  return 0;
}
