/*
 * Exercise9.c
 *
 *  Created on: Jan 5, 2021
 *      Author: Muhammad Farid
 */


#include<stdio.h>

/* A function to swap two numbers using pointers */
void swap(int *num1, int *num2){
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}


int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	int number1, number2;											/* Two numbers to be swapped */
	printf("Enter first number: ");
	scanf("%d",&number1);											/* Scanning for the first number */
	printf("Enter second number: ");
	scanf("%d",&number2);											/* Scanning for the second number */
	printf("The two numbers before swapping are %d and %d\n",number1,number2);				/* Displaying the two numbers before swapping */
	swap(&number1, &number2);																/* Calling the swap function */
	printf("The two number after swapping are %d and %d",number1,number2);					/* Displaying the two numbers after swapping */
	return 0;
}
