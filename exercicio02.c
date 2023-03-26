/*Questão 02)
Faça um programa que calcule a área de uma parede retangular e mostre também o menor
número de latas de tintas a serem compradas para pintá-la tendo o menor desperdício
possível. Consumo de tinta é de 3 l/m2.
As medidas são inteiras são valores inteiros. No mercado existem latas com capacidade de
9 , 5 e 1 litro.*/

#include <stdio.h>

int main(){
    int base, altura,area;

    printf("Insira a altura da parede em m²:");
    scanf("%d" ,&altura);

    while(altura<=0){
        printf("Erro, o valor informado tem que ser maior que zero!\nInsira novamente:");
        scanf("%d" ,&altura);
    }

    printf("Insira a base da parede em m²:");
    scanf("%d" ,&base);

    while(base<0 || base == altura){
        printf("Erro, o valor informado nao forma um retangulo!\nInsira novamente:");
        scanf("%d" ,&base);
    }

    area = base*altura;

    printf("A area da parede e de: %d.\nPara pinta-la serao necessarias:\n" ,area);

    printf("%d latas de nove litros\n\n" ,area/9);
    area%=9;

    printf("%d latas de cinco litros\n\n" ,area/5);
    area%=5;

    printf("%d latas de um litros\n\n" ,area);

    return 0;
}