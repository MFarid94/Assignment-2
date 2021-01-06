/*
 * Exercise18.c
 *
 *  Created on: Jan 6, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>
#include<math.h>

/* A function that determines if a number is a perfect square */
int SquareNumber(int number){
	int result;
	result = sqrt(number);
	if(number == (result*result)){
		return 1;
	}
	else{
		return 0;
	}
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	int number,result;
	printf("Enter number: ");
	scanf("%d",&number);
	result = SquareNumber(number);
	if(result == 1){
		printf("Number %d is a perfect square",number);
	}
	else if(result == 0){
		printf("Number %d is not a perfect square",number);
	}
	return 0;
}
