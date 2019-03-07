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

        result = factorial(nb, result);
        printf("La factorielle de %i est %i\n\n", nb, result);

        fflush(stdin);
        printf("pour quitter, cliquez sur q, sinon, cliquez sur c: ");
        scanf("%c", &quit);
        system("cls");
        result = 1;
    }while(quit!='q' && quit!='Q');
    return EXIT_SUCCESS;
}

//commentaire 1

/**
*
* \param nb int an integer
* \param result int an integer
* \result int the result of the factorial
*
*/
int factorial(int nb, int result)
{
        result= nb * result;
        nb-=1;
        if(nb>0){
            result= factorial(nb,result);
        }

    return result;
}
