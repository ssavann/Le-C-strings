#include <stdio.h>
#include <stdlib.h>



int main()
{
	char salut[] = "SALUT";
	char prenom[100];

	printf("Veuillez ecrire votre nom: \n");
	scanf("%s", prenom);

	printf("%s, %s", salut, prenom );



	return 0;
}