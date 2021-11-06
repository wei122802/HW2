#include <stdio.h>
#include <stdlib.h>

int Han_Xin_4()
{
	printf("(4)\n");
	for (int i = 0; i < 10; i++) {
		if (i == 4)
			for (int j = 0; j < 10; j++) {
				if (j == 4 || j == 5)
					printf("X");
				else
					printf("-");
			}

		else if (i == 3)
			for (int j = 0; j < 10; j++) {
				if (j == 3 || j == 6)
					printf("X");
				else
					printf("-");
			}
		else if (i == 2)
			for (int j = 0; j < 10; j++) {
				if (j == 2 || j == 7)
					printf("X");
				else
					printf("-");
			}
		else if (i == 1)
			for (int j = 0; j < 10; j++) {
				if (j == 1 || j == 8)
					printf("X");
				else
					printf("-");
			}
		else if (i == 0) for (int j = 0; j < 10; j++) printf("X");
		else for (int j = 0; j < 10; j++) printf("-");

		printf("\n");
	}


	return 0;
}