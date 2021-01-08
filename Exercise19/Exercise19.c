/*
 * Exercise19.c
 *
 *  Created on: Jan 7, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>
#define IS_POWER_OF_THREE	1
#define IS_NOT_POWER_OF_THREE	0

/* Check if a given number is three to the power of an integer number */
int ThreeToThePower(int number){


	while(1){
		if((number%3) == 0){
				if(number == 3){

					return IS_POWER_OF_THREE;
				}

				number = number / 3;
		    }
		else {
			return IS_NOT_POWER_OF_THREE;
			}
		}
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	int number;
	int result;
	printf("Enter a number: ");
	scanf("%d",&number);
	result = ThreeToThePower(number);
	if( result == IS_POWER_OF_THREE){
		printf("Given number is three to the power of positive integer number");
	}
	else if( result == IS_NOT_POWER_OF_THREE){
		printf("Given number is NOT three to the power of positive integer number");
	}
	return 0;
}
