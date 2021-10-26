#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("side1\tside2\thypotenuse\t\n");
	for (int i = 1; i <= 500; i++) {
		for (int j = 1; j <= 500; j++) {
			for (int k = 1; k <= 500; k++) {
				if (i*i + j * j == k * k) printf("%d\t%d\t%d\t\n", i, j, k);
			}
		}
	}
	system("pause");
	return 0;
}