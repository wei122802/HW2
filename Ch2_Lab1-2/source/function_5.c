#include <stdio.h>
#include <stdlib.h>

int Han_Xin_5()
{
	printf("(5)\n");
	for (int i = 0; i < 10; i++) {
		if (i == 0 || i == 9)
			for (int j = 0; j < 10; j++) {
				if (j == 0 || j == 9)
					printf("X");
				else
					printf("-");
			}
		else if (i == 1 || i == 8)
			for (int j = 0; j < 10; j++) {
				if (j == 1 || j == 8)
					printf("X");
				else
					printf("-");
			}
		else if (i == 2 || i == 7)
			for (int j = 0; j < 10; j++) {
				if (j == 2 || j == 7)
					printf("X");
				else
					printf("-");
			}
		else if (i == 3 || i == 6)
			for (int j = 0; j < 10; j++) {
				if (j == 3 || j == 6)
					printf("X");
				else
					printf("-");
			}
		else if (i == 4 || i == 5)
			for (int j = 0; j < 10; j++) {
				if (j == 4 || j == 5)
					printf("X");
				else
					printf("-");
			}

		printf("\n");
	}

	return 0;
}