/*
 * Exercise7.c
 *
 *  Created on: Jan 5, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function that checks if the first number is a multiple of the second */
void check_multiple(int num1 , int num2){
	int result;														/* A variable to store the remainder of the two numbers */
	result = num1 % num2;											/* Calculating the remainder of the first number divided by the second number */
	if( result == 0){
		printf("First number is multiple of the second");
	}
	else{
		printf("First number is not multiple of the second");
	}
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	int number1, number2;											/* First and second numbers respectively */
	printf("Enter first number: ");
	scanf("%d",&number1);											/* Scanning for the first number */
	printf("Enter second number: ");
	scanf("%d",&number2);											/* Scanning for the second number */
	check_multiple(number1, number2);
	return 0;
}
