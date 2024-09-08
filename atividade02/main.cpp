/*Atividade 2 (Exercício elaborado pelo professor Glauco da Fatec ITU)*/

#include <stdio.h>
main() {
    float pesoMax, compMin, veloVentoMax, peso, compPista, veloVento, altitude;
    printf("\nPermissao para decolar?");

    pesoMax = 150000;
    compMin = 1500;
    veloVentoMax = 30;

    printf("\n \nDigite o peso do aviao: ");
    scanf("%f", & peso);
    printf("Digite o comprimento da pista: ");
    scanf("%f", & compPista);
    printf("Digite a velocidade do vento: ");
    scanf("%f", & veloVento);
    printf("Digite a altitude do aeroporto: ");
    scanf("%f", & altitude);
    

    if (peso <= pesoMax) {
        if(peso <= 100000) {
            if (compPista >= compMin) {
                if (veloVento <= veloVentoMax) {
                    if (altitude <= 1000) {
                        printf("\n O aviao pode decolar!");
                    } else {
                        compMin = compMin + (altitude - 1000);
                        if (compPista >= compMin) {
                             printf("\n O aviao pode decolar!");
                        } else {
                             printf("\n O aviao nao pode decolar, pista curta.");
                        }
                    }
                } else {
                    printf("\n O aviao nao pode decolar, vento forte.");
                }
            } else {
                printf("\n O aviao nao pode decolar, pista curta.");
            }
        } else if(compPista >= 2000) {
            if (veloVento <= veloVentoMax) {
                    if (altitude <= 1000) {
                        printf("\n O aviao pode decolar!");
                    } else {
                        compMin = compMin + (altitude - 1000);
                        if (compPista >= compMin) {
                             printf("\n O aviao pode decolar!");
                        } else {
                             printf("\n O aviao nao pode decolar, pista curta.");
                        }
                    }
                } else {
                    printf("\n O aviao nao pode decolar, vento forte.");
                }
        } else {
            printf("\n O aviao nao pode decolar, pista curta.");
        }
    } else {
        printf("\n O aviao nao pode decolar, excesso de peso.");
    }
}