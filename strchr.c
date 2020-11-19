#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	char message[]="hello world";
	char char_a_trouve = 'w';

	//pour afficher le message et le nombre de caractere dans le tableau
	printf("taille du message \" %s \" = %d \n", message, strlen(message));


	//le pointeur permet de chercher dans la chaine de charactere, la lettre en question
	char* p_char = strchr(message, char_a_trouve);
	if (p_char == NULL)
	{
		printf("Le char %c n'est pas present dans la chaine %s\n", char_a_trouve, message );
	}
	else
	{
		printf("Le char %c est present dans la chaine %s\n", char_a_trouve, message );
	}


	return 0;
}