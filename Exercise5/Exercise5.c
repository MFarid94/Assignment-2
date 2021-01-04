/*
 * Exercise5.c
 *
 *  Created on: Jan 4, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

int check_even_or_odd(int number){
	if((number % 2) == 0){
		return 0;
	}
	else{
		return 1;
	}
}

int main(void){
		setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
		setvbuf(stderr , NULL , _IONBF , 0);
		int number;
		printf("Enter number: ");
		scanf("%d",&number);
		if( check_even_or_odd(number) == 0){
			printf("%d is an even number",number);
		}
		else{
			printf("%d is an odd number",number);
		}
		return 0;
}
