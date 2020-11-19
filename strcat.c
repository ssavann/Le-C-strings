#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{

	//copy de chaine de caractere
	char message[100] = "";		//va contenir 100 cases
	printf("message = %s\n", message);

	strcpy(message, "hello");			//"world" la chaine que je veux mettre a la place de "Hello"
	printf("message = %s\n", message);


	//fonction "strcat" pour concatener deux chaines de caracteres ensemble
	strcat(message, " world");
	printf("message = %s\n", message);

	return 0;
}