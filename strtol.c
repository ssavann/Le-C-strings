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



	//"strtol" Permet de convertir une chaine de caractere en valeur numerique qu'elle represente
	printf("l'entier de %s = %ld\n", "123", strtol("123", NULL, 10) );

	//"strtod" c'est la meme fonction que "strtol", mais pour les nombres décimaux
	printf("le float de %s = %f\n", "123.4", strtod("123.4", NULL) );


	return 0;
}