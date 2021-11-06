#include <stdio.h>
#include <stdlib.h>

int main() {
	int account;
	float balance, charges, credits, limit;
	printf("Enter account number(-1 to end):");
	scanf_s("%d".&account);
	printf("Enter beginning balance:");
	scanf_s("%f".&balance);
	printf("Enter total charges:");
	scanf_s("%d".&charges);
	printf("Enter total credit:");
	scanf_s("%d".&credits);
	printf("Enter credit limit:");
	scanf_s("%d".&limit);

	printf("Account:%d", account);
	printf("Credit limit:%d", limit);
	printf("Balance:%d", balance);

	system("pause");
	return 0;
}