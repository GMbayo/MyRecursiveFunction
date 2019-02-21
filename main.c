#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb = 0, result = 1;
    char quit = ' ';
    do
    {
        fflush(stdin);
        printf("Entrez un nombre entier: ");
        scanf("%i", &nb);

        for(int i = nb; i>0; i--)
        {
            result= result * i;
        }

        printf("La factorielle de %i est %i\n\n", nb, result);
        fflush(stdin);
        printf("pour quitter, cliquez sur q, sinon, cliquez sur c: ");
        scanf("%c", &quit);
        system("cls");
        result = 1;
        nb = 0;
    }while(quit!='q' && quit!='Q');

    return EXIT_SUCCESS;
}
