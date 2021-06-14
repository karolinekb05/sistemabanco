#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

main()
{
    int senha, cont = 0;
    char escolha;
    int saldo, saque, deposito;
    int repUsuarioOn;

    //Geral
    for ( ; ; ){


    //Senha
    for ( ; ; ){

        system("cls");

        printf("\t \t *** Bem-vindo ao Banco *** \n\n");
        printf("Digite sua senha: \n");
        scanf("%i", &senha);
        printf("\n");

    //Manter a sessão até o usuário solicitar saída
    for (repUsuarioOn = 0; repUsuarioOn != 1; ){
        if(senha == 123){
            printf("1. Saldo \n");
            printf("2. Saque \n");
            printf("3. Deposito \n");
            printf("4. Encerrar \n");

            fflush(stdin);

            escolha=getchar();

            switch(escolha){

            case '1': printf("Seu saldo eh: %i \n", saldo);
            break;

            case '2': printf("Quantidade do saque: \n");
            scanf("%i", &saque);
            saldo = saldo - saque;
            break;

            case '3': printf("Quantidade de deposito: \n");
            scanf("%i", &deposito);
            saldo = saldo + deposito;
            break;

            case '4': repUsuarioOn = repUsuarioOn + 1;
            break;

            default: printf("Escolha invalida! \n");
            }
        }
        else {
            printf("Senha invalida! \n");
            cont++;
            if(cont > 2){
            break;
            }
        }
    }
    }

    }
}
