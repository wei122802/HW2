#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j;
	scanf_s("%d %d", &i, &j);

	for (int k = 0; k < i; k++) {
		if (k == 0 || k == (i - 1)) {
			for (int h = 0; h < j; h++) printf("+");
			printf("\n");
		}
		else {
			for (int h = 0; h < j; h++)
				if (h == 0 || h == (j - 1)) printf("+");
				else printf(" ");
			printf("\n");
		}
	}
	system("pause");
	return 0;

}