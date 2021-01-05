/*
 * Exercise8.c
 *
 *  Created on: Jan 5, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function to display prime numbers in an interval between two numbers*/

void display_prime(int num1, int num2){
	int number = num1;
	int rem_of_two, rem_of_three;							/* Remainder of iterated number to 2 and to 3 respectively */

	/* A loop to check for prime number in the given interval*/
	for (int i = num1; i<=num2 ; ){
		rem_of_two = number % 2;
		rem_of_three = number % 3;

		/* Checking and displaying the prime numbers*/
		if(number == 2 || number == 3){
				printf("%d ",number);												/* Displaying prime number */
			}
			else{
				/* Condition to overstep current number if not a prime */
				if( rem_of_two == 0 || rem_of_three == 0){
					i++;
					number++;
					continue;
				}
				else{
					printf("%d ",number);
				}
			}
		i++;
		number++;
	}
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	int number1, number2;											/* Two numbers to be supplied by user */
	printf("Enter first number: ");
	scanf("%d",&number1);											/* Scanning for first number */
	printf("Enter second number: ");
	scanf("%d",&number2);											/* Scanning for second number */
	display_prime(number1,number2);									/* Displaying prime numbers between the interval of the first and second number */
	return 0;
}
