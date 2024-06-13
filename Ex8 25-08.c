#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
int qntPessoas;
int precoate = 0, precomaior = 0, valorPorigem1 = 0, valorPorigem2 = 0, valorPorigem3 = 0;
int precoPercenMaior, valorTransporte1, valorTransporte2, valorTransporte3;
float preco, precoPercen;

char opcao, porigem, mtransporte[15], perigo, EUA, Mexico, outros;
char T, F, A, S, N;

EUA = 1;
Mexico = 2;
outros = 3;



    printf("\n   ---------------------------------------");
    printf("\n  |     BEM VINDO A COMPANHIA!!                |");
    printf("\n   ---------------------------------------");
    printf("\n ");


do
    {

    qntPessoas ++;

    printf("\n   ---------------------------------------");
    printf("\n  |            Qual o preco?              |");
    printf("\n   ---------------------------------------\n                  ");
    scanf("%f", &preco);
    printf("\n ");

    printf("\n   ---------------------------------------");
    printf("\n  |            Qual o pais de origem?     |");
    printf("\n   ---------------------------------------\n                  ");
    scanf(" %c", &porigem);
    printf("\n ");

    printf("\n   ---------------------------------------");
    printf("\n  |            Qual o meio de transporte?  |");
    printf("\n   ---------------------------------------\n                  ");
    scanf("%i", &mtransporte);
    printf("\n ");

    printf("\n   ---------------------------------------");
    printf("\n  |            A carga e perigosa? S/N     |");
    printf("\n   ---------------------------------------\n                  ");
    scanf(" %c", &perigo);
    printf("\n ");



    if (preco < 100)
    {
        precoate ++;
    }

    if (preco > 100)
    {
       precomaior ++;
    }

    if (porigem = '1')
    {
        valorPorigem1 ++;
    }

    if (porigem = '2')
    {
        valorPorigem2 ++;
    }

    if (porigem ='3')
    {
        valorPorigem3 ++;
    }

    if (perigo = 'S')
    {
        perigo ++;
    }
    else
    {
        perigo ++;
    }

    printf("\n   ---------------------------------------");
    printf("\n  |            Voce deseja continuar?     |");
    printf("\n   ---------------------------------------\n                  ");
    scanf(" %c", &opcao);
    opcao = toupper(opcao);


    }while (opcao == 'S');

precoPercen = (precoate / 0.05);
precoPercenMaior = (precomaior / 0.10);
valorTransporte1 = (preco + 5);
valorTransporte2 = (preco + 35);
valorTransporte3 = (preco + 24);

return 0;
}
