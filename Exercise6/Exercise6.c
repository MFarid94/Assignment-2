/*
 * Exercise6.c
 *
 *  Created on: Jan 4, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>
#define CHECK_LOWER_FALSE	0
#define CHECK_LOWER_TRUE 	1

int test_case = CHECK_LOWER_TRUE;								/* Setting test_case variable to be true by default resembling input is a lowecase*/

/* A function that converts lowercase letter to uppercase letter */
char lower_to_upper(char alphabet){
	if( alphabet >= 'a' && alphabet <= 'z' ){
		alphabet = alphabet - 32;									/* Converting lowercase to uppercase by subtraction 32 from it's equivalent ASCII value */
	}
	else{
		test_case = CHECK_LOWER_FALSE;
	}
	return alphabet;
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	char alphabet;													/* Lowercase letter expected from the user*/
	char uppercase;													/* Uppercase letter of corresponding lowercase letter */
	printf("Please enter a lowercase letter: ");
	scanf("%c",&alphabet);											/* Scanning for an input character */
	uppercase = lower_to_upper(alphabet);							/* Calling a function to convert from lowercase to uppercase */
	if( test_case == CHECK_LOWER_TRUE ){
	printf("Uppercase letter %c of corresponding Lowercase letter %c ",uppercase,alphabet);
	   }
	else {
		printf("Invalid input, please enter a lowercase letter ");
	}
	return 0;
}
