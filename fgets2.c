#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{

	char prix[100];

	printf("Donnez un prix: \n");


	//permet d'écrire un nom avec espace "John Snow"
	if (fgets(prix, 99, stdin) != NULL)
	{
		printf("Vous avez indiquer %f\n", strtod(prix, NULL) );	
		//"prix" ici est une chaine de caractere et il faut le convertir en nombre. Il faut insérer "strtod"
	}

	


	return 0;
}