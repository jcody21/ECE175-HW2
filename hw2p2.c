#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

/*
Author: John Cody
Date created: 1/26/2018
Program Description: This program takes the three coefficients of a quadratic equation as input, and then it converts it to the roots. The program utilises
the quadratic equation to complete the calculations. 
*/

int main(void) {

	float a = 0.0, b = 0.0, c = 0.0;
	float x1 = 0.0, x2 = 0.0;

	printf("Enter the coefficients of the quadratic equation>");
	scanf("%f%f%f", &a, &b, &c);

	if ((a == 0) && (b == 0) && (c == 0)) {
		printf("This is not an equation.");
		return 0;
	}
	
	if (a == 0.0) {
		x1 = -c / b;
	}
	else if ((powf(b,2.0) - 4*a*c) < 0) {
		printf("There are no real roots.");
		return 0;
	}
	else {
		x1 = (-b + sqrt(powf(b,2.0) - 4*a*c)) / (2*a);
		x2 = (-b - sqrt(powf(b,2.0) - 4*a*c)) / (2*a);
	}

	if ((x2 == 0.0) || (x2 == x1)) {
		printf("\nThere is only one root x = %.0f.\n", x1);
	}
	else {
		printf("\nThe roots of the quadratic are : x1 = %.2f, x2 = %.2f.\n", x1, x2);
	}

	return 0;
}