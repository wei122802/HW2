#include <stdio.h>
#include <stdlib.h>

int Han_Xin_1()
{
	printf("(1)\n");

	for (int i = 0; i < 10; i++) {
		if (i == 0 || i == 9)
			for (int j = 0; j < 10; j++)  printf("X");
		else
			for (int j = 0; j < 10; j++) {
				if (j == 0 || j == 9)
					printf("X");
				else
					printf("-");
			}
		printf("\n");
	}
	return 0;
}