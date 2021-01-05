/*
 * Exercise11.c
 *
 *  Created on: Jan 5, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>


/* A function to check if a number is the power of two */
int power_of_two(int number){

	if(number == 0){
		return 0;							/* Incase the number is zero then it's not the power of two and a 0 is returned */
	}
	else if(number == 1){
		return 1;							/* Incase the number is 1 then it is actually 2 to the power of 0, so we return 1 as an indication */
	}
	else{
		/* A loop to check if the number is the power of two*/
		while(1){
			if(number % 2 == 0){
				if(number == 2){
					return 1;
				}
				/* Keep dividing by two, if the number is divisable by two it will eventually equal 2 and we return 1
				 * else the remainder will equal to not a zero value, hence exiting this condition and returning 0 */

				number = number / 2;
			}
			else{
				return 0;
			}
		}
	}

}


int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	int number;
	int result;
	printf("Enter number: ");
	scanf("%d",&number);
	result = power_of_two(number);
	if(result == 1){
		printf("%d is the power of 2",number);
	}
	else if(result == 0 ){
		printf("%d is not the power of 2",number);
	}
	return 0;
}
