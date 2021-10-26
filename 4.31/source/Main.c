#include <stdio.h>
#include <stdlib.h>

int main() {
	int x=1;
	for (int i = 0; i < 9; i++) {

		for (int j = 4; j > i; j--) printf(" ");
		for (int j = 0; j < i - 4; j++) printf(" ");

		if (i < 5) {
			for (int s = 0; s < i; s++) 	x = x + 1;
			for (int k = 0; k < i + x; k++) printf("*");
			x = 1;
		}
		else{
			x = 5;
			for (int s = 0; s < i-4; s++) 	x = x -3;
		for (int k = 0; k < i + x; k++) printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}