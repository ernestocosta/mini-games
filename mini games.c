/*
resumo de como funciona o programa, primeiramente foi criado o cabe�alho onde fica as bibliotecas e variaveis, logo 
depois foi criado um do{}while para o la�o do menu dentro dele foi criado um printf para as op��es e um scanf.
e um switch com quatro case onde irar ficar os programas para cada jogo.

no case 1: Pergunta e resposta foi criado um do{}while para quando acabar o jogo o usuario te a op��o de escolher entre 
jogar de novo ou voltar ao menu, dentro do la�o do case 1 tem dois printf para da as boas vindas ao jogo e system pause 
tem um printf para cada pergunta e um scanf para cada respota do usuario foi criado tamb�m um fflush(stdin) que tem a 
fun��o de limpar o buffer do teclado e um getchar() que tem a fun��o de retorna um valor, para o programa retornar para 
o usuario se esta correto foi criado um if{} else para cada pergunta tamb�m.

no case 2: Adivinhe o n�mero foi criado um do{}while para quando acabar o jogo o usuario te a op��o de escolher entre 
jogar de novo ou voltar ao menu, dentro do la�o do case 2  srand(time(NULL)) e rand()para gerar valores aleatorios, ap�s 
isso foi criado dosi printf para da as boas vindas ao jogo e outro do{}while com um printf e scanf para o usuario digitar 
um valor e dentro de do{}while mais interno tem um if{}else e um if com sua codi��es para informar se o numero e maior 
ou menor do numero que o computador escolheu.

no case 3: Olho de cobra  foi criado dos printf para da as boas vinda ao usuario, depois foi criado dois printf para os
usuarios escreverem seu nome logo em seguida foi criado um while onde vai determinar quem vai come�ar o jogo e um outro 
while nesse while mais interno tem um  srand(time(NULL)) e dois rand() um para cada dado e tem cinco if com suas condi��es 
e outro if e else para escolher se o usuario vai querer jogar novamente ou voltar ao menu.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
     int opcao; // para o menu, switch e para o do while.
	 char resposta; // para o case 1 
	 int num, x,tent =0; // para o case 2
	 
	 // para case 3
	 int pontosj1 = 1,pontosj2 = 1,jogarNovamente = 5,escolha1 = 1,escolha2 = 1;
	 int dado1, dado2,pontosNaRodada1 = 0,pontosNoBanco1 = 0,pontosNaRodada2 = 0, pontosNoBanco2 = 0;
	 char nome1[50];
	 char nome2[50];
					
	 do{
		 
		 printf("1 Opcao: Pergunta e resposta.\n2 Opcao: Adivinhe o numero.\n3 Opcao: Olho de cobra.\n4 Opcao: Sair.\n");
	  scanf("%d",&opcao);
	  
	switch(opcao){
		
		case 1: {
			do{
            printf("\n                  bem vindo ao jogo Pergunta e resposta\n");
            printf("                                  vamos comecar!\n");
			system("pause");		
	  		printf("primeira pergunta: qual o valor de 250 vezes 250 ?\n");
	  		printf("escolha uma opcao:\nA)49.128\nb)62.500\nC)57.932\n");
	  		fflush(stdin);
	  		scanf("%c",&resposta);
	  		getchar();
	  		if(resposta == 'b') {	
	  			printf("voce acertou\n\n ");}
	  		else{
	  			printf("voce errou, a resposta certa era b\n\n ");	}
	  		system("pause");
	  		printf("segunda pergunta: azul com vermelho da qual cor ?\n");
	  		printf("escolha uma opcao:\nA)roxo\nb)verde\nC)laranja\n");
	  		scanf("%c",&resposta);
	  		getchar();
	  		if(resposta == 'a') {	
	  			printf("voce acertou\n\n ");}
	  		else{
	  			printf("voce errou, a resposta certa era A\n\n ");	}
	  		system("pause");
	  		printf("ultima pergunta: quantos lados tem um quadrado ?\n");
	  		printf("escolha uma opcao:\nA)10\nb)6\nC)4\n");
	  		scanf("%c",&resposta);
	  		getchar();
	  		if(resposta == 'c') {	
	  			printf("voce acertou\n\n ");}
	  		else{
	  			printf("voce errou, a resposta certa era c\n\n ");	}
		
				printf("digite 1 para jogar de novo e 2 para voltar ao menu\n ");
	  		scanf("%d",&opcao);
	  		system("cls");
			}while(opcao !=2);
			system("cls");	
		}break;

 
 	   case 2: {
			
			do {
				 srand(time(NULL));
                 x = rand() % 1000 + 1;
				 printf("\n                   ESTOU PENSANDO EM UM NUMERO DE 1 a 1000");
				 printf("\n                                  ADIVINHE!");
				 do {
				 printf("\nDigite um numero: ");
				 scanf("%d", &num);
				 if (num > x) {
				 printf("O NUMERO QUE ESTOU PENSANDO E MENOR DO QUE %d", num);
				 }
				 else {
				 if (num < x)
				 printf("O NUMERO QUE ESTOU PENSANDO E MAIOR DO QUE %d", num);
		         }   
				 tent++;
				 } while (num != x && tent < 5);
				 printf("\no numero era %d",x);
				 printf("\ndigite 1 para jogar de novo e 2 para voltar ao menu\n ");
				 scanf("%d",&opcao);
				 system("cls");
				 }while(opcao != 2);
				 system("cls");
				 }break;
 	   
 	   		 
 	   		 
 	            case 3: {
				 
				  printf("\n                  bem vindo ao jogo olho de cobra\n");
				  printf("                                  vamos comecar!\n");
				  system("pause");
				  printf("\nNome do primeiro jogador: ");
				  scanf("%s", & nome1);
				  printf("\nNome do segundo jogador: ");
				  scanf("%s",nome2);			
				  while (pontosj1 < 50 || pontosj2 < 50 ){
				  printf("\n					Vez do PRIMEIRO jogador\n\n");
				  printf("					Digite 1 para comecar sua vez: ");
				  scanf("%d", &escolha1);
				  while (escolha1 != 0){
				  srand(time(NULL));
				  printf("\n\n     VEZ DO PRIMEIRO JOGADOR  \ n");
				  printf("	Primeiro dado: %d\n", dado1 = (rand()%6 + 1));
				  printf("	Segundo dado: %d\n", dado2 = (rand()%6 + 1));
				  printf("	Soma dos dados na Rodada: %d\n\n", (dado1 + dado2));
				  pontosNaRodada1 = pontosNaRodada1 + dado1 + dado2;
				  if (dado1 == 1 || dado2 == 1){
				  pontosNaRodada1 = 0;
				  escolha1 = 0;
				  printf("Um de seus dados tirou 1;\n\nvoce perdeu todos os seus pontos desta rodada e voce perdeu sua vez!\n\n\n\n\n\n");
			  	 break;}
		         if(dado1 == 1 && dado2 == 1){
				 pontosNoBanco1 = 0;
				 escolha1 = 0;
				 printf("\n\n\nUm de seus dados tirou 1;\n\nvoce perdeu todos os seus pontos desta rodada e do banco e voce perdeu sua vez!\n\n\n\n\n\n");
			     break;}
		         printf("\n\n			Pontos acumulados na rodada: %d\n", pontosNaRodada1);
                 printf("			0- Se voce deseja guardar seus pontos e passar a vez \n			1- se voce deseja continuar: ");
                 scanf("%d", &escolha1);
                 if (escolha1 == 0){
				 pontosNoBanco1 += pontosNaRodada1;
			   	printf("\n%d ponto(s) foram adicionados ao seu banco!\n", pontosNoBanco1);
                pontosNaRodada1 = 0;}
				if (dado1 == 1 && dado2 == 1){
				pontosNaRodada1 = 0;
				pontosNoBanco1 = 0;
				escolha1 = 0;
				printf("Voce tirou 1 em todos os dados;\n\nvoce perdeu todos os seus pontos desta rodada e do banco e voce perdeu sua vez!\n\n\n\n\n\n");
				}
				if (dado1 == 1 || dado2 == 1){
				pontosNaRodada1 = 0;
				escolha1 = 0;
				printf("Um de seus dados tirou 1;\n\nvoce perdeu todos os seus pontos desta rodada e voce perdeu sua vez!\n\n\n\n\n\n");
				}
				}//VEZ DO PRIMEIRO JOGADOR
				if (pontosNoBanco1 >= 50){
				printf("\nParabens %s, voce foi o vencedor!", nome1);
				printf("1 - Para Jogar novamente \n 2 - para Voltar ao Menu \n ");
				scanf("%d", &jogarNovamente);
				if (jogarNovamente == 1){
				pontosj1 = 0;
				pontosNoBanco1 = 0;
				pontosj2 = 0;
				pontosNoBanco2 = 0;
				pontosNaRodada1 = 0;
				pontosNaRodada2 = 0;}
				else if (jogarNovamente == 2){
				break;}}
					
					
					if (pontosNoBanco2 >= 50)
					{
						printf("\nParabens %s, voce foi o vencedor!\n\n", nome2);
						printf("1 - Para Jogar novamente \n 2 - para Voltar ao Menu \n");
						scanf("%d", &jogarNovamente);
						if (jogarNovamente == 1)
						{
							pontosj1 = 0;
							pontosNoBanco1 = 0;
							pontosj2 = 0;
							pontosNoBanco2 = 0;
							pontosNaRodada1 = 0;
							pontosNaRodada2 = 0;
						}
						else if (jogarNovamente == 2)
						{
							break;
						}
					}
						printf("\n					Vez do SEGUNDO jogador\n\n");
						printf("\n					Digite 1 para comecar sua vez: ");
						scanf("%d", &escolha2);	
											
						while (escolha2 != 0)
						{ //VEZ DO SEGUNDO JOGADOR

						srand(time(NULL));
						printf("\n\n   VEZ DO SEGUNDO JOGADOR    \n");
						printf("	Primeiro dado: %d\n", dado1 = (rand()%6 + 1));
						printf("	segundo dado: %d\n", dado2 = (rand()%6 + 1));
						
						pontosNaRodada2 = pontosNaRodada2 + dado1 + dado2;
						if (dado1 == 1 || dado2 == 1){
								pontosNaRodada2 = 0;
								escolha2 = 0;
								printf("\n\n\nUm de seus dados tirou 1;\n\nvoce perdeu todos os seus pontos desta rodada e voce perdeu sua vez!\n\n\n\n\n\n");
								break;
						}
							
						if (dado1 == 1 && dado2 == 1)
						{
								pontosNaRodada2 = 0;
								pontosNoBanco2 = 0;
								escolha2 = 0;
								printf("\n\n\nUm de seus dados tirou 1;\n\nvoce perdeu todos os seus pontos desta rodada e do banco e voce perdeu sua vez!\n\n\n\n\n\n");
								break;
						}
						printf("\n\n			Pontos acumulados na rodada: %d\n", pontosNaRodada2);

						printf("			0- Se voce deseja guardar seus pontos e passar a vez \n			1- se voce deseja continuar: ");
						scanf("%d", &escolha2);
						
							if (escolha2 == 0)
							{
								pontosNoBanco2 += pontosNaRodada2;
								printf("%d ponto(s) foram adicionados ao seu banco!\n", pontosNoBanco2);
								pontosNaRodada2 = 0;
							}
								
							if (dado1 == 1 || dado2 == 1){
								pontosNaRodada2 = 0;
								escolha2 = 0;
								printf("\n\n\n\n\n\n\n\n\n\n\n\nUm de seus dados tirou 1;\n\nvoce perdeu todos os seus pontos desta rodada e voce perdeu sua vez!\n\n\n\n\n\n");
							}
							
							if (dado1 == 1 && dado2 == 1)
							{
								pontosNoBanco2 = 0;
								escolha2 = 0;
								pontosNoBanco2 = 0;
								printf("\n\n\n\n\n\n\n\n\n\n\n\nUm de seus dados tirou 1;\n\nvoce perdeu todos os seus pontos desta rodada e do banco e voce perdeu sua vez!\n\n\n\n\n\n");
							}
						}//VEZ DO SEGUNDO JOGADOR
					if (pontosNoBanco1 >= 50)
					{
						printf("\nParabens %s, voce foi o vencedor!", nome1);
						printf("1 - Para Jogar novamente \n2 - para Voltar ao Menu \n ");
						scanf("%d", &jogarNovamente);
						if (jogarNovamente == 1)
						{
							pontosj1 = 0;
							pontosNoBanco1 = 0;
							pontosj2 = 0;
							pontosNoBanco2 = 0;
							pontosNaRodada1 = 0;
							pontosNaRodada2 = 0;
						}
						else if (jogarNovamente == 2)
						{
							break;
						}
					}
					
					if (pontosNoBanco2 >= 50)
					{
						printf("\nParabens %s, voce foi o vencedor!\n\n", nome2);
						printf("1 - Para Jogar novamente \n2 - para Voltar ao Menu \n ");
						scanf("%d", &jogarNovamente);
						if (jogarNovamente == 1)
						{
							pontosj1 = 0;
							pontosNoBanco1 = 0;
							pontosj2 = 0;
							pontosNoBanco2 = 0;
							pontosNaRodada1 = 0;
							pontosNaRodada2 = 0;
						}
						else if (jogarNovamente == 2)
						{
							break;
							
						}
					}
				}
				 }break;
				 
				 case 4: {
				 printf("voce escolheu a opcao de sair do programa, obrigado por jogar encerrando o programa");
				 exit(0);
				 }
 	   
	}	 
		 
	 }while(opcao != 4);
    
    
    
    
    return 0;
}