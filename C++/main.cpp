/*13 -) A Empresa precisa de um programa que faça o cálculo do INSS de seus funcionários, pois recentemente houve uma mudança na faixa de contribuição do INSS.
O usuário deve digitar o valor do salário do funcionário e o sistema informar o valor do INSS.
Segue a baixo a tabela do INSS 2024, acima de R$ 7786,02 o valor é R$ 908,86.*/


#include <stdio.h>

main() {
    float salario, inss;
    printf("\n Calculo de INSS a pagar");

    printf("\n\n Digite o valor do seu salario: R$ ");
    scanf("%f", &salario);
    
    if (salario <= 1412.00) {
        inss = salario * 7.5/100;
    } else if (salario <= 2666.68) {
        inss = salario * 9/100 - 21.18;
    } else if (salario <= 4000.03) {
        inss = salario * 12/100 - 101.18;
    } else if (salario <= 7786.02) {
        inss = salario * 14/100 - 181.18;
    }

    printf("\n O valor do INSS a pagar e de R$ %.2f", inss);
}