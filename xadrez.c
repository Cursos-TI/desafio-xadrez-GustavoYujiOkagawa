#include <stdio.h>

int main() {
    int userInput, selectedPieceColor,mainMenuOption, selectPawnOption, tower, pawnWalk, directionPawn;

    //Menu principal do jogo Xadrez.
    printf("=== Bem-vindo ao Jogo de Xadrez ===\n\n");
    printf("Selecione uma opção:\n");
    printf("1. Iniciar o jogo\n");
    printf("2. Modos de jogo\n");
    printf("3. Regras\n");
    printf("4. Sair\n");
    printf("Escolha: ");
    scanf("%d", &mainMenuOption);
    //Utilizei o switch para a entrada do usuário.
    switch (mainMenuOption) {
    case 1:
        printf("\nVocê escolheu iniciar o jogo!\n");
        printf("Escolha a cor das suas peças:\n");
        printf("1. Brancas\n");
        printf("2. Pretas\n");
        scanf("%d", &selectedPieceColor);

        switch (selectedPieceColor) {
        case 1:
            printf("\nVocê jogará com as peças BRANCAS!\n");

            printf("Selecione qual peça você quer movimentar:\n");
            printf("1. Torre\n");
            printf("2. Bispo\n");
            printf("3. Rainha\n");
            scanf("%d", &selectPawnOption);

            switch (selectPawnOption)
            {
            case 1:

                printf("Informe quantas casas você quer andar!\n");
                scanf("%d", &pawnWalk);
                
                while (pawnWalk > 0){
                    printf("cima\n");
                    pawnWalk--;
                }

                
                break;

            case 2:
                printf("Informe quantas casas você quer andar!\n");
                scanf("%d", &pawnWalk);
                printf("Escolha em qual direção deseja ir:\n");
                printf("1. Direita\n");
                printf("2. Esquerda\n");
                scanf("%d", &directionPawn);
                //Switch para Escolha da direção do peão
                switch (directionPawn)
                {
                case 1:
                    
                //Para o Bisco utilizei o do-while
                 do
                {
                    
                    printf("cima\n");
                    printf("Direita\n");
                    
                    pawnWalk--;
                    /* code */
                } while (pawnWalk > 0);

                    /* code */
                    break;

                case 2:

                 do
                {
                    
                    printf("cima\n");
                    printf("Esquerda\n");
                    
                    pawnWalk--;
                    /* code */
                } while (pawnWalk > 0);

                break;
                
                default:
                    break;
                }

               
            break;


            case 3:
                printf("Escolha em qual direção deseja ir:\n");
                  printf("1. cima\n");
                  printf("2. baixo\n");
                  printf("3. Direita\n");
                  printf("4. Esquerda\n");
                  printf("5. Diagonal\n");
                scanf("%d", &directionPawn);
                printf("Informe quantas casas você quer andar!\n");
                scanf("%d", &pawnWalk);

                switch (directionPawn)
                {
                case 1:

                    for (int i = 0; i < pawnWalk; i++)
                    {
                        printf(" cima\n");
                        
                        /* code */
                    }
                    
                    
                    /* code */
                    break;
                case 2:

                
                    for (int i = 0; i < pawnWalk; i++)
                    {
                        printf(" baixo\n");
                        
                        /* code */
                    }
                    
                    
                    /* code */
                    break;
                case 3:
                    
                    
                    for (int i = 0; i < pawnWalk; i++)
                    {
                        printf(" Direita\n");
                        
                        /* code */
                    }
                    
                    /* code */
                    break;


                    case 4:

                    for (int i = 0; i < pawnWalk; i++)
                    {
                        printf(" Esquerda\n");
                        
                        /* code */
                    }
                    break;

                    case 5:
                        for (int i = 0; i < pawnWalk; i++)
                    {
                        printf(" Diagonal\n");
                        
                        /* code */
                    }
                    break;
                
                default:
                    break;
                }

                
                
            break;
            
            default:
                break;
            }
            


            
            break;
        case 2:
            printf("\nVocê jogará com as peças PRETAS!\n");
            break;
        default:
            printf("\nOpção inválida. Atribuindo peças BRANCAS por padrão.\n");
            break;
        }
        break;

    case 2:
        printf("\n=== Modos de Jogo ===\n");
        printf("- Clássico: Regras tradicionais.\n");
        printf("- Relâmpago: Partidas rápidas.\n");
        printf("- Treino: Contra a máquina.\n");
        break;

    case 3:
        printf("\n=== Regras Básicas ===\n");
        printf("O objetivo do xadrez é dar xeque-mate no rei adversário.\n");
        printf("As peças movem-se de formas diferentes.\n");
        printf("Começam jogando as peças brancas.\n");
        break;

    case 4:
        printf("\nSaindo do jogo. Até a próxima!\n");
        break;

    default:
        printf("\nOpção inválida! Por favor, reinicie o programa.\n");
        break;
    }

    return 0;
}
