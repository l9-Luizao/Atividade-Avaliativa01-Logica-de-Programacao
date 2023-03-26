/*Questão 05)
Na pacata e bela cidade de Alvinópolis, existem 3 instituições financeiras. Cada instituição
adota critérios próprios por classificar seus clientes. A tabela a seguir apresenta os critérios
de cada instituição:

(tabela)

Faça um programa que tenha como entrada o código da instituição financeira e o saldo de
um cliente e apresente sua classificação. Validar os dados de entrada
*/

#include <stdio.h>

int main(){
    int codigo;
    float saldo;

    printf("---Menu de instituicoes---\n\n");

    printf("1 - Banco Central de Alvinopolis\n2 - Casa da Moeda de Alvinopolis\n3 - Banco Cota\n\nInsira a instituicao em que o cliente se encontra:");
    scanf("%d" ,&codigo);

    while(codigo<1 || codigo>3){
        printf("Erro, codigo invalido!\nInsira novamente:");
        scanf("%d" ,&codigo);
    }

    printf("Insira o saldo do cliente:");
    scanf("%f" ,&saldo);

    while(saldo<0){
        printf("Erro, saldo invalido!\nInsira novamente:");
        scanf("%f" ,&saldo);
    }

    switch(codigo){
        case 1:
           if(saldo>100000)
                printf("Cliente 5 estrelas!");
            else
                if(saldo>=5000)
                    printf("Cliente 3 estrelas!");
                else
                    printf("Cliente 1 estrela!");
        break;

        case 2:
           if(saldo>1000000)
                printf("Cliente especial!");
            else
                if(saldo>=50000)
                    printf("Cliente quase especial!");
                else
                    printf("Cliente normal!");
        break;

        case 3:
           if(saldo>10000000)
                printf("Cliente VIP!");
            else
                if(saldo>=500000)
                    printf("Cliente middle!");
                else
                    printf("Cliente usual!");
        break;
    }

    return 0;
}