/*
 * Exercise17.c
 *
 *  Created on: Jan 6, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A function to obtain the maximum XOR value of two given numbers */
int MaximumValue(int l, int r){
		int max_value = 0;
		int result = 0;

		/* A loop for calculating maximum XOR value */
		for(int i = l ; i<=r ;i++){
			for(int j = i ; j<=r ;j++){
				result = i^j;
				if(result > max_value){
					max_value = result;
				}
			}
		}
		return max_value;
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	int number1, number2;
	int maximum;
	printf("Enter first number: ");
	scanf("%d",&number1);											/* Scanning for first number */
	printf("Enter second number: ");
	scanf("%d",&number2);											/* Scanning for second number */
	maximum = MaximumValue(number1,number2);
	printf("The maximum value of %d XOR %d is %d",number1,number2,maximum);
	return 0;
}
