#include <stdio.h>
#include <stdlib.h>

int main() {
	float sale,salary;
	printf("Enter sales in dollars(-1 to end):");
	scanf_s("%f", &sale);

	if (sale != -1) 
		printf("Salary is:%.2f\n", (sale*0.09) + 200);
	
	system("pause");
	return 0;
}