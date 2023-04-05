#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int resp;
    int pontos = 0;
    char resposta;
    char jogador1[10];
    char jogador2[10];
    int sorteio;
    int escapar;
    int perder;

    for (int i = 0; i < 1000; i++)
    {
        printf("\n\nBEM VINDO AO ARCADE!!!\n\n");
        printf("O que deseja fazer? \n 1 - Jogar Perguntas e respostas \n 2 - Jogar Cobra na Caixa\n 3 - Sair\n");
        scanf("%d", &resp);

        if(resp == 1){
            for (int j = 0; j < 1000; j++)
            {
                printf("Perguntas e Repostas: voce devera responder todas as perguntas, e ao final, sabera sua pontuacao\n\n");
                printf("1: Quantas vezes a selecao brasileira foi campea mundial?\n a) - 3\n b) - 4\n c) - 5\n d) - 6\n");
                scanf(" %c", &resposta);

                if(resposta== 'a'|| resposta == 'A'){
                    printf("Resposta errada \n");
                }if(resposta == 'b'|| resposta == 'B'){
                    printf("Resposta errada \n");
                }if(resposta == 'c'|| resposta == 'C'){
                    printf("resposta Correta \n");
                    pontos += 1;
                }if(resposta == 'd'|| resposta == 'D'){
                    printf("Resposta errada \n");
                }

                printf("2: Quantas vezes Ayrton Senna venceu o GP de Monaco?\n a) - 1\n b) - 2\n c) - 3\n d) - 4\n");
                scanf(" %c", &resposta);

                if(resposta == 'a'|| resposta == 'A'){
                    printf("Resposta errada \n");
                }if(resposta == 'b'|| resposta == 'B'){
                    printf("Resposta errada \n");
                }if(resposta == 'c'|| resposta == 'C'){
                    printf("resposta Correta \n");
                    pontos += 1;
                }if(resposta == 'd'|| resposta == 'D'){
                    printf("Resposta errada \n");
                }

                printf("3: qual selecao venceu a copa do mundo de 1998 na franca?\n a) - inglaterra\n b) - italia\n c) - franca\n d) - brasil\n");
                scanf(" %c", &resposta);

                if(resposta == 'a'|| resposta== 'A'){
                    printf("Resposta errada \n");
                }if(resposta == 'b'|| resposta == 'B'){
                    printf("Resposta errada \n");
                }if( resposta == 'c'|| resposta == 'C'){
                    printf("Resposta errada \n");
                }if(resposta == 'd'|| resposta == 'D'){
                    printf("resposta Correta \n");
                    pontos+= 1;
                }

                printf("4: quantos jogadores formam uma equipe de Rugby?\n a) - 10\n b) - 11\n c) - 13\n d) - 15\n");
                scanf(" %c", &resposta);

                if(resposta == 'a'|| resposta == 'A'){
                    printf("Resposta errad \n");
                }if(resposta == 'b'|| resposta == 'B'){
                    printf("Resposta errada \n");
                }if(resposta == 'c'|| resposta == 'C'){
                    printf("Resposta errada \n");
                }if(resposta == 'd'|| resposta == 'D'){
                    printf("resposta Correta \n");
                    pontos += 1;
                }

                printf("5: quem foi o tenista numero 1 em 2008?\n a) - novak djokovik\n b) - roger federer\n c) -rafael nadal\n d) - o Brasileiro guga\n");
                scanf(" %c", &resposta);

                if(resposta == 'a'|| resposta == 'A'){
                    printf("Resposta errada \n");
                }if(resposta == 'b'|| resposta == 'B'){
                    printf("Resposta errada \n");
                }if(resposta == 'c'|| resposta == 'C'){
                    printf("resposta Correta \n");
                    pontos+= 1;
                }if(resposta == 'd'|| resposta == 'D'){
                    printf("Resposta errada \n");
                }

                printf("voce terminou com %d pontos", pontos);
                printf("\n\nO que desejar fazer? \n 1 - Jogar novamente\n 2 - Voltar ao menu\n");
                scanf(" %d", &resp);

                if(resp == 1){
                    j --;
                }if(resp == 2){
                    j += 1000;
                }
            }
        }

        if(resp == 2){
            for (int k = 0; k < 1000; k++)
            {
                    
                printf("Cobra na Caixa!\n\n");
                printf("Sinopse: Voce e seu colega de trabalho estavam explorando a tumba do farao Neebe quando entraram em uma grande sala com escrituras na parede. Enquanto inspecionavam as escrituras, voces acidentalmente pressionaram um botao escondido que lacrou as portas, prendendo-os la dentro. Entao, cinco caixas apareceram no centro da sala, uma delas contendo o botao para abrir as portas, mas uma delas contem uma cobra mortal! Voces decidem jogar turnos para abrir uma caixa de cada vez, na esperanca de nao encontrar a cobra.");

                printf("\n\nInforme do nome do primeiro jogador: ");
                scanf(" %s", jogador1);
                printf("\nInforme do nome do segundo jogador: ");
                scanf(" %s", jogador2);

                srand(time(NULL));
                sorteio = rand() % 2;
                escapar = rand() % 5;
                perder = rand() % 5;

                if(perder == escapar){
                    perder = rand() % 5;
                }

                for(int i = 1; i<= 5; i++){
                    int escolha;
                    if(i == 1|| i==3 || i ==5){
                        printf("%d: escolha um numero de 1 a 5: ", jogador1);
                        scanf("%d", &escolha);
                    }else{
                        printf("%d: escolha um numero de 1 a 5: ", jogador2);
                        scanf("%d", &escolha);
                    }
                    if(escolha == perder){
                        printf("a cobra estava nessa caixa, voce perdeu!");
                        break;
                    }
                    if(escolha == escapar){
                        printf("PARABENS !! Voces encontraram o botao que abre todas as portas E VENCERAM O JOGO!");
                        printf("\n\nO que desejar fazer? \n 1 - Jogar novamente\n 2 - Voltar ao menu\n");
                        scanf(" %d", &resp);

                        if(resp == 1){
                        k   --;
                }       if(resp == 2){
                        k += 1000;
                    }

                    }
                }

                
            }
        }
    }
}