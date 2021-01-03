/*
 * Exercise1.c
 *
 *  Created on: Jan 3, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* Prototype of cube function */
int cube(int num);

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);						/* Disabling Buffer*/
	setvbuf(stderr , NULL , _IONBF , 0);
	int number;													/* Number to be cubed */
	int result;													/* Number after being cubed */
	printf("Enter number: ");
	scanf("%d",&number);										/* Scanning the number from user */
	result = cube(number);										/* Calling cube function that returns the cube of passed value */
	printf("The cube of number %d is %d",number,result);
	return 0;
}

/* A function to cube a given number */
int cube(int num){
	return num*num*num;										/* Cubing the passed value */
}
