#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main(void)
 {
 float rate=0.1,principal = 5000.0;
 for (int i = 0; i < 5; i++) {
	 printf("When interest rates are %.1f\n", rate * 100);
	 printf("%4s%21s\n", "Year", "Amount on deposit");
	 for (int year = 1; year < 16; year++)   printf("%4u%21.2f\n", year, principal*pow(1.0 + rate, year));
	 rate = rate + 0.005;
	 printf("--------------------------------\n");
 }
	system("pause");
	return 0;
 }