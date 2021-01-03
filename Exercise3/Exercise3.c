/*
 * Exercise3.c
 *
 *  Created on: Jan 4, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function to check if a number is positive of negative */
void check_positivity(int number){
	if( number > 0){
		printf("Number is positive");
	}
	else if( number < 0){
		printf("Number is negative");
	}
	else{
		printf("Number is Zero");
	}
}


int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	int number;														/* Number supplied by the user */
	printf("Enter number: ");
	scanf("%d",&number);
	check_positivity(number);										/* Calling a function to check number positivity */
	return 0;
}
