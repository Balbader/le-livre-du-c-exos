#include <stdio.h>

int main()
{
    int    c_nbr;
    char   c;	   

    printf("Ecrivez une phrase suivie par la touche 'entrer' : \n");
    c_nbr = 0;

    do
    {
	scanf("%c", &c);
	c_nbr++;
    }
    while (c != '\n');	
    c_nbr--;

    printf("Votre ligne comporte %d caractére.\n", c_nbr);
	
    return (0);
}
