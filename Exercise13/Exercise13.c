/*
 * Exercise13.c
 *
 *  Created on: Jan 6, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function to add two float numbers */
int floor_number(float num1 , float num2){
	int result;
	result = num1 + num2;						/* Assigning the sum of two float number to an integer number inorder to demote the result to a lower whole number */
	return result;
}


int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	float number1, number2;
	int result;
	printf("Enter first number: ");
	scanf("%f",&number1);											/* Scanning for the first float number */
	printf("Enter second number: ");
	scanf("%f",&number2);											/* Scanning for the second float number */
	result = floor_number(number1,number2);								/* Reducing the sum of two float numbers to the lowest whole integer number */
	printf("The floor of two given numbers is %d",result);
	return 0;
}
