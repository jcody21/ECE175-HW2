#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
Author: John Cody
Date created: 1/26/2018
Program Description: This program takes in the number of minutes a person spends on their phone and the amount of data that they use, and uses
those inputs to determine how much that person should be charged for their monthly phone bill. It outputs how much the base minutes cost, the 
extra overage minutes cost, the base data cost, the extra data cost, the pretax total, the tax cost, and the total. 
*/

int main(void) {

	int numMinutes = 0;
	float baseMinutes = 39.99, pMinute = 0.0;
	
	float data = 0.0, baseData = 10.0, pData = 0.0;

	printf("Enter the number of minutes : ");
	scanf("%d", &numMinutes);

	printf("\nEnter the amount of data (in GB) : ");
	scanf("%f", &data);
	
	if ((numMinutes - 600) < 0) {
		pMinute = 0.0;}
	else {
		pMinute = (numMinutes - 600) * 0.40;}


	if ((data - 2.0) < 0) {
		pData = 0.0;}
	else if ((data - (int)data) > 0.0) {
		pData = ((int)data - 1.0) * 10;}
	else {
		pData = (data - 2.0) * 10;}


	float subTotal = baseMinutes + baseData + pMinute + pData;
	float tax = 1.0525 * subTotal - subTotal; 
	float total = subTotal + tax;

	printf("\nYour monthly charges are as follows.\n");
	printf("\nMonthly Plan : $%.2f\n", baseMinutes);
	printf("Additional per minute charges : $%.2f\n", pMinute);
	printf("Data charges : $%.2f\n", baseData);
	printf("Additional data charges : $%.2f\n", pData);
	printf("Pretax total : $%.2f\n", subTotal);
	printf("Tax paid : $%.2f\n", tax);
	printf("Total : $%.2f\n", total);

	return 0;
}