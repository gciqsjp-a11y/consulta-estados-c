#include <stdio.h>

int main()
{
    int codigo;

    printf("Digite o codigo do estado: ");
    scanf("%d", &codigo);

    switch(codigo)
    {
        case 31:
            printf("\nEstado: Minas Gerais");
            printf("\nUF: MG");
            printf("\nLatitude: -18.1");
            printf("\nLongitude: -44.38");
            printf("\nRegiao: Sudeste");
            break;

        case 21:
            printf("\nEstado: Sao Paulo");
            printf("\nUF: SP");
            printf("\nLatitude: -22.19");
            printf("\nLongitude: -48.79");
            printf("\nRegiao: Sudeste");
            break;

        case 52:
            printf("\nEstado: Goias");
            printf("\nUF: GO");
            printf("\nLatitude: -15.98");
            printf("\nLongitude: -49.86");
            printf("\nRegiao: Centro-Oeste");
            break;

        default:
            printf("\nEstado nao encontrado");
    }