#include <stdio.h>
int main()
{
	int units;
	float bill;
	printf("==== BITWISE OPERATIONS ====\n");
	printf("Enter The Units Cunsumed:");
	scanf("%d",&units);
	if (units <= 100)
	{
		bill = units * 1.5;
	}
	else if (units <= 200)
	{
		bill = 100 * 1.5 + (units-100) * 2.0;
	}
	else if (units <= 500)
	{
		bill = 100 * 1.5 + 100 * 2.0+ (units-200) * 3.0;
	}
	else
	{
		bill = 100 * 1.5 + 100 * 2.0+ 300 * 3.0 + (units-500) * 5.0;
	}
	printf("Electric Bill = Rs.%.2f",bill);
	return 0;
}