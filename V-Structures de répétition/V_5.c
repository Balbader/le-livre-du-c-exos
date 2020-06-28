#include <stdio.h>

int main()
{
	int		c_nbr;		//compteur du nombre de caractere
	char 	c;			//pour lire un caractere de la ligne	   

	printf("Ecrivez une phrase suivie par la touche 'entrer' : \n");
	c_nbr = 0;			//Compter a partir de 0

	do
	{
		scanf("%c", &c);//lecture d'un caractere
		c_nbr++;		//comptage d'un caractere
	}
	while (c != '\n');	//Lire jusqu'a la fin de la ligne '\n'
	c_nbr--;			//Ne pas compter '\n'

	printf("Votre ligne comporte %d caractére.\n", c_nbr);
	
	return(0);
}
