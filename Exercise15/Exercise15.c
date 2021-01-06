/*
 * Exercise15.c
 *
 *  Created on: Jan 6, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function that counts the number of ones in an unsigned integer number "32 bits" */
int countOnes(int number){
	unsigned int mask = 0x80000000;								/* A masking variable */
	int ones = 0;

	/* A loop for check each bit in the number by ANDing it with a masking variable */
	for(unsigned int i = 0; i<32 ; i++){

		/* A condition to check if current bit in iteration is a 1 or not */
		if(((number<<i) & mask)){
			++ones;
		}

	}
	return ones;
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	unsigned int number;
	int number_of_ones;
	printf("Enter number: ");
	scanf("%d",&number);											/* Scanning user for unsigned 32-bit number */
	number_of_ones = countOnes(number);								/* Calling countOnes function and assigning result after counting 1's in a number */
	printf("Number of 1's in the given number is %d",number_of_ones);
	return 0;
}
