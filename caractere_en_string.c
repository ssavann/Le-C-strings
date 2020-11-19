#include <stdio.h>
#include <stdlib.h>



int main()
{
	//le '\0' sert à indique que la chaine de caractere est terminée
	char salut[] = {'H','E','L','L','O','\0' };

	//pas besoin de faire un boucle 'for' 
	printf("%s", salut);

	return 0;
}