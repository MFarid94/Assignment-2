/*
 * Exercise14.c
 *
 *  Created on: Jan 6, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

/* A recursive function to calculate fibonacci series */
long fibonacci(long n){
	if(n == 0 || n == 1){
		/* Base case */
		return n;
	}
	else{
		/* Recursive step */
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	int num;
	long result;
	printf("Enter number: ");
	scanf("%d",&num);
	result = fibonacci(num);
	printf("Result of fibonacci is %ld",result);
	return 0;
}
