#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{

	char nom[100];

	printf("Comment tu t'appelles? \n");


	//permet d'écrire un nom avec espace "John Snow"
	if (fgets(nom, 99, stdin) != NULL)
	{
		printf("tu ne sais rien %s!", nom );
	}

	


	return 0;
}