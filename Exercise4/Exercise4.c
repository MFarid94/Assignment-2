/*
 * Exercise4.c
 *
 *  Created on: Jan 4, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

#define NO_ERROR_VALID_OPERATION 0
#define ERROR_INVALID_OPERATION 1


float calculate(float a , float b , char operator , int *error_ptr){
	float result;
	switch(operator){

			case '+':result = a+b;
			 	 	 *error_ptr = NO_ERROR_VALID_OPERATION;
			 	 	 break;

			case'-':result = a-b;
					*error_ptr = NO_ERROR_VALID_OPERATION;
					break;

			case'*':result = a*b;
					*error_ptr = NO_ERROR_VALID_OPERATION;
					break;

			case'/':result = a/b;
					*error_ptr = NO_ERROR_VALID_OPERATION;
					break;

			default:printf("ERROR INVALID INPUT OPERATION\n");
					*error_ptr = ERROR_INVALID_OPERATION;
					break;
	}
	return result;
}

int main(void){
		setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
		setvbuf(stderr , NULL , _IONBF , 0);
		char op;
		float number1;
		float number2;
		float result;
		int error = NO_ERROR_VALID_OPERATION;		/* Used to check if the input operation is valid or not */
		printf("Enter the required operation: ");
		scanf("%c",&op);							/* Scanning for operator */
		printf("Enter first number: ");
		scanf("%f",&number1);						/* Scanning for first number */
		printf("Enter second number: ");
		scanf("%f",&number2);						/* Scanning for second number */
		result = calculate(number1 , number2 , op , &error);		/* Passing numbers and operation */
		if( error == NO_ERROR_VALID_OPERATION ){
			printf("Result = %f",result);
		}
		else if( error == ERROR_INVALID_OPERATION ){
			printf("No result , invalid operation");
		}
		return 0;
}
