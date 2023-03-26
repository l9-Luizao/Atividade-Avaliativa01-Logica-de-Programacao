/*Questão 01)
Escrever um programa que tenha como número de matrícula, as 3 notas obtidas por um aluno
nas 3 verificações e a média dos exercícios que fazem parte da avaliação. Calcular a média de
aproveitamento, usando a fórmula:
MA = (Nota1 + Nota2 x 2 + Nota3 x 3 + ME )/7
A atribuição de conceitos obedece a tabela abaixo:
Média de Aproveitamento Conceito
≥9,0 A
≥7,5 e < 9,0 B
≥6,0 e < 7,5 C
≥4,0 e < 6,0 D
< 4,0 E
O programa deve escrever o número de matrícula do aluno, suas notas, a média dos
exercícios, a média de aproveitamento, o conceito correspondente e a mensagem:
APROVADO se o conceito for A, B ou C e REPROVADO se o conceito for D ou E.*/

#include <stdio.h>

int main(){
    int matricula;
    float nota1 ,nota2 ,nota3 ,mediaEx ,mediaAprov;

    printf("Insira o numero de matricula:");
    scanf("%d" ,&matricula);

    printf("Insira a primeira nota:");
    scanf("%f" ,&nota1);

    while(nota1<0 || nota1>10){
        printf("Erro, o valor informado deve ser de 0 a 10!\nInsira novamente:");
        scanf("%f" ,&nota1);
    }

    printf("Insira a segunda nota:");
    scanf("%f" ,&nota2);

    while(nota2<0 || nota2>10){
        printf("Erro, o valor informado deve ser de 0 a 10!\nInsira novamente:");
        scanf("%f" ,&nota2);
    }

    nota2*=2;

    printf("Insira a terceira nota:");
    scanf("%f" ,&nota3);

    while(nota3<0 || nota3>10){
        printf("Erro, o valor informado deve ser de 0 a 10!\nInsira novamente:");
        scanf("%f" ,&nota3);
    }

    nota3*=3;

    printf("Insira a media dos exercicios:");
    scanf("%f" ,&mediaEx);

    while(mediaEx<0 || mediaEx>10){
        printf("Erro, o valor informado deve ser de 0 a 10!\nInsira novamente:");
        scanf("%f" ,&mediaEx);
    }

    mediaAprov = (nota1 + nota2 + nota3 + mediaEx)/7;

    printf("\n\n----------Resultados----------\n\n");

    if(mediaAprov>=9)
        printf("Aluno:%d\nMedia final:%.1f\nNota: A\nStatus: Aprovado." ,matricula,mediaAprov);
    else
        if(mediaAprov>=7.5)
            printf("Aluno:%d\nMedia final:%.1f\nNota: B\nStatus: Aprovado." ,matricula,mediaAprov);
        else
            if(mediaAprov>=6)
                printf("Aluno:%d\nMedia final:%.1f\nNota: C\nStatus: Aprovado." ,matricula,mediaAprov);
            else
                if(mediaAprov>=4)
                    printf("Aluno:%d\nMedia final:%.1f\nNota: D\nStatus: Reprovado." ,matricula,mediaAprov);
                else
                    printf("Aluno: %d\nMedia final: %.1f\nNota: E\nStatus: Aprovado." ,matricula,mediaAprov);

    return 0;
}