#include <stdio.h>
#include <stdlib.h>

int main() {
	//(A)
		printf("(A)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i + 1; j++) printf("%s","*");
		printf("\n");
	}
	//(B)
	printf("(B)\n");
	for (int i = 10; i > 0; i--) {
		for (int j = 0; j < i ; j++) printf("%s", "*");
		printf("\n");
	}
	//(C)
	printf("(C)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i ; j++) printf("%s", " ");
		for (int k = 10; k > i; k--) printf("%s", "*");
		printf("\n");
	}
	//(D)
	printf("(D)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 9; j > i; j--) printf("%s", " ");
		for (int k = 0; k < i+1; k++) printf("%s", "*");
		printf("\n");
	}
	system("pause");
	return 0;
}