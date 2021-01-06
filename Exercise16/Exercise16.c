/*
 * Exercise16.c
 *
 *  Created on: Jan 6, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function to count number of 1's in an 8-bit unsigned integer */
/* The function recieves an unsigned integer 32-bits in an unsigned char variable, hence type casting it into 8 bits number */
int countOnes(unsigned char number){
	unsigned char mask = 0x80;							/* Masking bit for 8-bit unsigned integer */
	int ones = 0;
	/* A loop to iterate on all 8 bits */
	for(int i = 0; i<8 ; i++){

		if((number<<i) & mask){
			++ones;
		}
	}
	return ones;
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	unsigned int number;
	int ones_count;
	printf("Enter an 8-bit number: ");
	scanf("%d",&number);											/* Scanning for unsigned integer number 32-bits */
	ones_count = countOnes(number);									/* Passing unsigned integer 32-bits number */
	printf("Number of 1's in given number is %d",ones_count);
	return 0;
}
