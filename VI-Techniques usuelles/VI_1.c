/*  Ecrire un programme qui lit 20 notes entières
    et qui indiques le pourcentage de notes supérieures à 10 */

#include <stdio.h>

int main()
{
    int i;          /*pour le compteur de boucle sur les 5 notes*/
    int n_moy;      /*compteur du nombre de notes supérieures à 10*/
    int note;       /*pour lire une note à évaluer*/
    float pourcent; /*pourcentage de notes supérieures à 10*/

    n_moy = 0;

    printf("Entrer les 5 notes à évaluer séparées par un espace : \n");

    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &note); /*lecture d'une note*/
        if (note > 10)
            n_moy++; /* +1 sur le compteur si supérieure à 10*/
    }
    if (n_moy == 0)
        printf("aucune note supérieure à 10.\n");
    else
    {
        pourcent = (100.0 * n_moy) / 5;
        printf("il y'a %.f%% pourcent de notes supérieures à 10.\n", pourcent);
    }
    return (0);
}