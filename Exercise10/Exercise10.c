/*
 * Exercise10.c
 *
 *  Created on: Jan 5, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function to calculate the number of holes in the digits of a given number */
int countHoles(int number){
	int remainder;																/* a variable for check each digit separately */
	int holes = 0;																/* a variable for counting the number of holes */
	remainder = number % 10;													/* attaining each digit through dividing by ten */

	/* A loop for calculating the number of holes in a given number by checking each digit separately */
	while(remainder != 0){
		if(remainder == 8){
			holes += 2;
		}
		else if(remainder == 0 || remainder == 4 || remainder == 6 || remainder == 9){
			holes++;
		}
		else{
			number = number / 10 ;
			remainder = number % 10;
			continue;
		}
		number = number / 10 ;
		remainder = number % 10;
	}
	return holes;
}


int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	int number;														/* Number to be checked */
	int holes;														/* Number of holes in a given number */
	printf("Enter number: ");
	scanf("%d",&number);											/* Scanning for a number given by the user */
	holes = countHoles(number);										/* Calling the function countHoles and assigning the return value to variable holes*/
	printf("Number of holes is %d",holes);
	return 0;
}
