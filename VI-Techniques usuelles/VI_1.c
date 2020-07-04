#include <stdio.h>

int main()
{
    int i;
    int n_moy;
    int note;    
    float pourcent;
    
    n_moy = 0;

    printf("Entrer les 5 notes à évaluer séparées par un espace : \n");

    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &note); 
        if (note > 10)
            n_moy++; 
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
