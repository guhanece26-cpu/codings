#include <stdio.h>
int main()
{
	int a,b;
	printf("==== BITWISE OPERATIONS ====\n");
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Before Swapping:\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("After Swapping:\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	return 0;
}