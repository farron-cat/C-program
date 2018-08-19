/* altnames.c */
#include <stdio.h>
#include <inttype.h>

int main (void)
{
  int32_t me32;
  me32 = 45933945;

  printf("Frist ,assume int32_t is int:");
  printf("me32 = %d \n", me32);
  printf("Next, Let's not make any assumptions.\n");
  printf("instead use a \"macro\"from inttype.h \n");
  printf("me32 = %"PRID32"\n",me32);

  return 0;
}
