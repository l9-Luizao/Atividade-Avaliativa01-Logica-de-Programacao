/*Questão 04)
Faça um programa para determinar a situação (APROVADO/EXAME/REPROVADO) de
um aluno, dado a sua frequência (FREQ) (porcentagem de 0 a 100%) e sua nota (NOTA)
(nota de 0.0 a 10.0), sendo que:
Condição                                                    Situação
Freqüência até 75%                                          Reprovado
Freqüência entre 75% e 100% e Nota até 3.0                  Reprovado
Freqüência entre 75% e 100% e Nota de 3.0 até 7.0             Exame
Freqüência entre 75% e 100% e Nota entre 7.0 e 10.0         Aprovado
*/

#include <stdio.h>
#define AULAS 60

int main(){
    int faltas;
    float nota;

    printf("Insira o numero de faltas no semestre:");
    scanf("%d" ,&faltas);

    while(faltas<0){
        printf("Erro, o numero de faltas tem que ser maior ou igual a zero!\nInsira novamente:");
        scanf("%d" ,&faltas);
    }

    printf("Insira sua nota:");
    scanf("%f" ,&nota);

    while(nota<0 || nota>10){
        printf("Erro, a nota tem que ser um valor de zero a dez!\nInsira novamente:");
        scanf("%f" ,&nota);
    }

    if(faltas > (AULAS*0.25))
        printf("Reprovado por faltas!");
    else
        if(nota>=7)
            printf("Aprovado!");
        else
            if(nota>=3)
                printf("Exame!");
            else
                printf("Reprovado por falta de nota!");
    
    return 0;
}