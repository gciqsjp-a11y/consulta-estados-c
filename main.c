#include <stdio.h>

int main()
{
    int ddd;

    printf("Digite o DDD: ");
    scanf("%d", &ddd);

    switch(ddd)
    {
        // ===== SUDESTE =====
        case 11:
            printf("\nRegiao: Sao Paulo (Capital)");
            printf("\nLatitude: -23.55");
            printf("\nLongitude: -46.63");
            break;

        case 12:
            printf("\nRegiao: Vale do Paraiba (SP)");
            printf("\nLatitude: -23.20");
            printf("\nLongitude: -45.90");
            break;

        case 13:
            printf("\nRegiao: Litoral de SP (Santos)");
            printf("\nLatitude: -23.96");
            printf("\nLongitude: -46.33");
            break;

        case 14:
            printf("\nRegiao: Bauru / Marilia (SP)");
            printf("\nLatitude: -22.32");
            printf("\nLongitude: -49.07");
            break;

        case 15:
            printf("\nRegiao: Sorocaba (SP)");
            printf("\nLatitude: -23.50");
            printf("\nLongitude: -47.45");
            break;

        case 16:
            printf("\nRegiao: Ribeirao Preto (SP)");
            printf("\nLatitude: -21.17");
            printf("\nLongitude: -47.81");
            break;

        case 17:
            printf("\nRegiao: Sao Jose do Rio Preto (SP)");
            printf("\nLatitude: -20.81");
            printf("\nLongitude: -49.37");
            break;

        case 18:
            printf("\nRegiao: Presidente Prudente (SP)");
            printf("\nLatitude: -22.12");
            printf("\nLongitude: -51.39");
            break;

        case 19:
            printf("\nRegiao: Campinas (SP)");
            printf("\nLatitude: -22.90");
            printf("\nLongitude: -47.06");
            break;

        case 21:
            printf("\nRegiao: Rio de Janeiro (Capital)");
            printf("\nLatitude: -22.91");
            printf("\nLongitude: -43.17");
            break;

        case 22:
            printf("\nRegiao: Regiao dos Lagos (RJ)");
            printf("\nLatitude: -22.75");
            printf("\nLongitude: -42.88");
            break;

        case 24:
            printf("\nRegiao: Volta Redonda / Petropolis (RJ)");
            printf("\nLatitude: -22.52");
            printf("\nLongitude: -44.10");
            break;

        case 27:
            printf("\nRegiao: Vitoria (ES)");
            printf("\nLatitude: -20.32");
            printf("\nLongitude: -40.34");
            break;

        case 28:
            printf("\nRegiao: Sul do Espirito Santo");
            printf("\nLatitude: -20.85");
            printf("\nLongitude: -41.11");
            break;

        case 31:
            printf("\nRegiao: Belo Horizonte (MG)");
            printf("\nLatitude: -19.91");
            printf("\nLongitude: -43.93");
            break;

        case 32:
            printf("\nRegiao: Juiz de Fora (MG)");
            printf("\nLatitude: -21.76");
            printf("\nLongitude: -43.35");
            break;

        case 33:
            printf("\nRegiao: Governador Valadares (MG)");
            printf("\nLatitude: -18.85");
            printf("\nLongitude: -41.94");
            break;

        case 34:
            printf("\nRegiao: Uberlandia (MG)");
            printf("\nLatitude: -18.91");
            printf("\nLongitude: -48.26");
            break;

        case 35:
            printf("\nRegiao: Sul de Minas (MG)");
            printf("\nLatitude: -21.78");
            printf("\nLongitude: -46.58");
            break;

        case 37:
            printf("\nRegiao: Divinopolis (MG)");
            printf("\nLatitude: -20.14");
            printf("\nLongitude: -44.89");
            break;

        case 38:
            printf("\nRegiao: Montes Claros (MG)");
            printf("\nLatitude: -16.73");
            printf("\nLongitude: -43.86");
            break;

        // ===== NORDESTE =====
        case 71:
            printf("\nRegiao: Salvador (BA)");
            printf("\nLatitude: -12.97");
            printf("\nLongitude: -38.50");
            break;

        case 81:
            printf("\nRegiao: Recife (PE)");
            printf("\nLatitude: -8.05");
            printf("\nLongitude: -34.88");
            break;

        case 85:
            printf("\nRegiao: Fortaleza (CE)");
            printf("\nLatitude: -3.73");
            printf("\nLongitude: -38.52");
            break;

        case 86:
            printf("\nRegiao: Teresina (PI)");
            printf("\nLatitude: -5.09");
            printf("\nLongitude: -42.80");
            break;

        case 84:
            printf("\nRegiao: Natal (RN)");
            printf("\nLatitude: -5.79");
            printf("\nLongitude: -35.21");
            break;

        case 83:
            printf("\nRegiao: Joao Pessoa (PB)");
            printf("\nLatitude: -7.12");
            printf("\nLongitude: -34.86");
            break;

        case 82:
            printf("\nRegiao: Maceio (AL)");
            printf("\nLatitude: -9.66");
            printf("\nLongitude: -35.73");
            break;

        case 79:
            printf("\nRegiao: Sergipe (SE)");
            printf("\nLatitude: -10.91");
            printf("\nLongitude: -37.07");
            break;

        // ===== CENTRO-OESTE =====
        case 61:
            printf("\nRegiao: Brasilia (DF)");
            printf("\nLatitude: -15.78");
            printf("\nLongitude: -47.93");
            break;

        case 62:
            printf("\nRegiao: Goias (GO)");
            printf("\nLatitude: -16.68");
            printf("\nLongitude: -49.25");
            break;

        case 65:
            printf("\nRegiao: Mato Grosso (MT)");
            printf("\nLatitude: -12.64");
            printf("\nLongitude: -55.42");
            break;

        case 67:
            printf("\nRegiao: Mato Grosso do Sul (MS)");
            printf("\nLatitude: -20.44");
            printf("\nLongitude: -54.64");
            break;

        // ===== NORTE =====
        case 91:
            printf("\nRegiao: Belem (PA)");
            printf("\nLatitude: -1.45");
            printf("\nLongitude: -48.50");
            break;

        case 92:
            printf("\nRegiao: Manaus (AM)");
            printf("\nLatitude: -3.10");
            printf("\nLongitude: -60.02");
            break;

        case 63:
            printf("\nRegiao: Palmas (TO)");
            printf("\nLatitude: -10.17");
            printf("\nLongitude: -48.33");
            break;

        default:
            printf("\nDDD nao encontrado no Brasil");
    }

    return 0;
}