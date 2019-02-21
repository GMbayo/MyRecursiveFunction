#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb = 0, result = 1;

    printf("Entrez un nombre entier: ");
    scanf("%i", &nb);

    for(int i = nb; i>0; i--)
    {
        result= result * i;
    }

    printf("La factorielle de %i est %i", nb, result);

    return EXIT_SUCCESS;
}
