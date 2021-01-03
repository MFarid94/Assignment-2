/*
 * Exercise2.c
 *
 *  Created on: Jan 3, 2021
 *      Author: Muhammad Farid
 */

#include<stdio.h>

void check_alphabet(char character){
	if((character >= 'a' && character <= 'z')||(character >= 'A' && character <= 'Z')){
		printf("Character is an alphabet");
	}
	else{
		printf("Character is not an alphabet");
	}
}

int main(void){
	setvbuf(stdout , NULL , _IONBF , 0);							/* Disabling buffer */
	setvbuf(stderr , NULL , _IONBF , 0);
	char chara;
	printf("Enter character: ");
	scanf("%c",&chara);												/* Scanning for character from user */
	check_alphabet(chara);											/* Checking if alphabet */
	return 0;
}
