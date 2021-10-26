#include <stdio.h>
#include <stdlib.h>

int main() {
	float principal, rate, day, interest;

	printf("Enter loan principal(-1 to end):");
	scanf_s("%f", &principal);

	if (principal != -1) {
		printf("Enter interest rate:");
			scanf_s("%f", &rate);
			printf("Enter term of the loan in days:");
			scanf_s("%f", &day);
	
		printf("The interest charge is $%.2f\n:",principal*rate*day/365);

	}
	system("pause");
	return 0;


}