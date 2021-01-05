/*
 * Exercise12.c
 *
 *  Created on: Jan 6, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

int heater_activation_time(int temperature){
	if(temperature >= 0 && temperature < 30){
		return 7;
	}
	else if(temperature >= 30 && temperature < 60){
		return 5;
	}
	else if(temperature >= 60 && temperature < 90){
		return 3;
	}
	else if(temperature >= 90 && temperature <= 100){
		return 1;
	}
	else if(temperature > 100){
		return 0;
	}
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	int temperature;
	int result;
	printf("Enter required heater temperature: ");
	scanf("%d",&temperature);										/* Scanning for required heater temperature */
	result = heater_activation_time(temperature);					/* Calling a function for checking heater activation time */
	switch(result){

	case 7:printf("Required heating time is 7 minutes");break;

	case 5:printf("Required heating time is 5 minutes");break;

	case 3:printf("Required heating time is 3 minutes");break;

	case 1:printf("Required heating time is 1 minute");break;

	default:printf("Invalid input temperature");
	}
}
