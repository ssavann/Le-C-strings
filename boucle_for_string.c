#include <stdio.h>
#include <stdlib.h>



int main()
{
	char salut[] = {'H','E','L','L','O' };



	//faire une boucle pour trouver les éléments dans le tableau
	for(int i=0; i<5;i++)
	{
		//printf("%c\n", salut[i] );
		printf("%c ", salut[i] );
	}


	return 0;
}