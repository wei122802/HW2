#include <stdio.h>
#include <stdlib.h>

int main() {
	int hour;
	float rate;

	printf("Enter # of hours worked (-1 to end):");
	scanf_s("%d",&hour);
		if (hour != -1) {
			printf("Enter hourly rate of the worker ($00.00):");
			scanf_s("%f", &rate);

			if (hour > 40) printf("Salary is $%.2f\n", (hour - 40)*1.5*rate + 400);
			else printf("Salary is $%.2f\n", hour*rate);
		}

	system("pause");
	return 0;
}