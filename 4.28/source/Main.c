#include <stdio.h>
#include <stdlib.h>

int main() {
	int paycode;
	float weeksal,hours,wage,sales,qua,items;
	printf("Enter paycode:");
	scanf_s("%d", &paycode);

	switch (paycode)
	{
	case 1:
		printf("Enter weekly salary:");
		scanf_s("%f", &weeksal);
		printf_s("Salary:%.2f\n", weeksal);
		break;
	case 2:
		printf("Enter working hours:");
		scanf_s("%f", &hours);
		printf("Enter hourly wage:");
		scanf_s("%f", &wage);
		if(hours>40) printf_s("Salary:%.2f", (hours-40)*1.5*wage+40*wage);
		else printf_s("Salary:%.2f\n", hours * wage);
		break;
	
	case 3:
		printf("Enter gross weekly sales:");
		scanf_s("%f", &sales);
		printf_s("Salary:%.2f\n", sales*0.057+250);
		break;

	case 4:
		printf("Enter money for each of the items :");
		scanf_s("%f", &items);
		printf("Enter production quantity :");
		scanf_s("%f", &qua);
		printf_s("Salary:%.2f\n", items*qua);
		break;
	}

	system("pause");
	return 0;
}