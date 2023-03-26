/*Questão 03)
Escreva um programa que informe a quantidade total de calorias de uma refeição a partir do
usuário que deverá informar o prato, a sobremesa e a bebida (veja a tabela a seguir).
Prato                   Calorias            Sobremesa           Calorias            Bebida              Calorias
Vegetariano                180 cal           Abacaxi             75 cal             Chá                 20 cal
Peixe                      230 cal           Sorvete diet        110 cal            Suco de laranja     70 cal
Frango                     250 cal           Mousse diet         170 cal            Suco de melão       100 cal
Carne                       350 cal          Mousse chocolate    200 cal            Refrigerante diet   65 cal


Obs. Validar a entrada de dados.*/

#include <stdio.h>

int main(){
    int codigo, soma=0;

    printf("---Bem vindo ao menu de calorias---\n\n");

    printf("Opcoes disponiveis:\n\nVegetariano - 1\nPeixe - 2\nFrango - 3\nCarne - 4\n\nInsira o codigo:");
    scanf("%d" ,&codigo);

    while(codigo<1 || codigo>4){
        printf("Erro, codigo invalido!\nInsira novamente:");
        scanf("%d" ,&codigo);
    }

    switch(codigo){
        case 1:
            soma+=180;
            break;
        
        case 2:
            soma+=230;
            break;

        case 3:
            soma+=250;
            break;

        case 4:
            soma+=350;
            break;
    }

    printf("Opcoes disponiveis:\n\nAbacaxi - 1\nSorvete diet - 2\nFMousse Diet - 3\nMousse Chocolate - 4\n\nInsira o codigo:");
    scanf("%d" ,&codigo);

    while(codigo<1 || codigo>4){
        printf("Erro, codigo invalido!\nInsira novamente:");
        scanf("%d" ,&codigo);
    }

    switch(codigo){
        case 1:
            soma+=75;
            break;
        
        case 2:
            soma+=110;
            break;

        case 3:
            soma+=170;
            break;

        case 4:
            soma+=200;
            break;
    }

    printf("Opcoes disponiveis:\n\nCha - 1\nSuco de laranja - 2\nSuco de melao - 3\nRefrigerante diet - 4\n\nInsira o codigo:");
    scanf("%d" ,&codigo);

    while(codigo<1 || codigo>4){
        printf("Erro, codigo invalido!\nInsira novamente:");
        scanf("%d" ,&codigo);
    }

    switch(codigo){
        case 1:
            soma+=20;
            break;
        
        case 2:
            soma+=70;
            break;

        case 3:
            soma+=100;
            break;

        case 4:
            soma+=65;
            break;
    }

    printf("O total de calorias foi de: %d" ,soma);

    return 0;
}