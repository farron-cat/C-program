/***********************************************************************/
/*													practice 2											 	    */
/***********************************************************************/

#include <stdio.h>

int main()
{
	int age, days;
	printf("Please enter your age:");
	scanf("%d", &age);
	getchar();
	days = age * 365;
	printf("\n amount to %d days", days);
	
	return 0;
}