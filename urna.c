#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int nulo;

int cand1;

int cand2;

int cand3;

int cand4;

double tot;

int votar()
{

	int candidato, confirmador;

	system("clear");

	printf("Para Voto NULO ou BRANCO, digite 111 no candidato.\n\nDigite o numero do candidato:");

	scanf("%d", &candidato);

	switch (candidato)

	{

	case 111:

		system("clear");

		printf("Seu voto C): NULO OU BRANCO \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");

		scanf("%d", &confirmador);

		if (confirmador == 1)

		{

			// nulo++;
			nulo = nulo + 1;

			system("clear");

			printf("Voto confirmado, obrigado por votar! \n\n\n");

			sleep(5);
		}

		if (confirmador == 2)

		{

			votar();
		}

		if ((confirmador != 1) && (confirmador != 2))

		{

			system("clear");

			printf("Escolha incorreta, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
		}

		votar();

		break;

	case 666:

		//apuracao(c1, c2, c3, c4);
		printf("*****************************************\n");

		printf("--------------ELEICOES 2021-------------\n");

		printf("*****************************************\n");

		printf("\nThamires: %d VOTOS\n", cand1);

		printf("\nJoC#o %d VOTOS\n", cand2);

		printf("\nRosangela: %d VOTOS\n", cand3);

		printf("\nLucas: %d VOTOS\n", cand4);

		printf("\nBRANCOS OU NULOS: %d VOTOS\n", nulo);

		sleep(60);

		break;

	case 17:

		system("clear");

		printf("Vai votar em Thamires Gente boa? tem certeza? \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");

		scanf("%d", &confirmador);

		if (confirmador == 1)

		{

			// c1++;
			cand1 = cand1 + 1;

			system("clear");

			printf("Voto confirmado, boa sorte!\n\n\n");

			sleep(5);
		}

		if (confirmador == 2)

		{

			votar();
		}

		//caso o usuario digite a tecla errada na hora de confirmaC'C#o
		if ((confirmador != 1) && (confirmador != 2))

		{

			system("clear");

			printf("Escolha incorreta, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
		}

		votar();

		break;

	case 22:

		system("clear");

		printf("Vai votar em Joao? tem certeza? \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");

		scanf("%d", &confirmador);

		if (confirmador == 1)

		{

			// c2++;
			cand2 = cand2 + 1;

			system("clear");

			printf("Voto confirmado, boa sorte!\n\n\n");

			sleep(5);
		}

		if (confirmador == 2)

		{

			votar();
		}

		//caso o usuario digite a tecla errada na hora de confirmaC'C#o
		if ((confirmador != 1) && (confirmador != 2))

		{

			system("clear");

			printf("Escolha incorreta, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
		}

		votar();

		break;

	case 31:

		system("clear");

		printf("Vai votar em Rosangela? tem certeza? \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");

		scanf("%d", &confirmador);

		if (confirmador == 1)

		{

			// c3++;
			cand3 = cand3 + 1;

			system("clear");

			printf("Voto confirmado, boa sorte!\n\n\n");

			sleep(5);
		}

		if (confirmador == 2)

		{

			votar();
		}

		//caso o usuario digite a tecla errada na hora de confirmaC'C#o
		if ((confirmador != 1) && (confirmador != 2))

		{

			system("clear");

			printf("Escolha incorreta, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
		}

		votar();

		break;

	case 38:

		system("clear");

		printf("Vai votar em Lucas? tem certeza? \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");

		scanf("%d", &confirmador);

		if (confirmador == 1)

		{

			// c4++;
			cand4 = cand4 + 1;

			system("clear");

			printf("Voto confirmado, boa sorte!\n\n\n");

			sleep(5);
		}

		if (confirmador == 2)

		{

			votar();
		}

		else if (confirmador == 2)

		{

			votar();
		}

		else

		{

			system("clear");

			printf("Opcao invalida, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
		}

	default:

		system("clear");

		printf("Candidato invalido, digite o numero do partido. \n\n");

		sleep(3);
	}

	votar();
}

int apuracao(int cand1, int cand2, int cand3, int cand4, int nulo)
{

	printf("*****************************************\n");

	printf("--------------ELEICOES 2021-------------\n");

	printf("*****************************************\n");

	printf("\nThamires Gente boa: %d VOTOS\n", cand1);

	printf("\nJoao %d VOTOS\n", cand2);

	printf("\nRosangela: %d VOTOS\n", cand3);

	printf("\nLucas: %d VOTOS\n", cand4);

	printf("\nBRANCOS OU NULOS: %d VOTOS\n", nulo);

	return 0;
}

int main()
{

	nulo = 0;

	cand1 = 0;

	cand2 = 0;

	cand3 = 0;

	cand4 = 0;

	printf("*****************************************\n");

	printf("--------------ELEICOES 2021------------- \n");

	printf("*****************************************\n");

	printf("\n\nEleicoes do sofrimento.\n\nPara sair, ou ver o relatorio, digite 666.\nPara iniciar aperte qualquer tecla.\n\n");

	getchar();

	printf("\n------Candidatos dessa temporada-----\n");

	printf("\nThamires gente boa - 17\n");

	printf("\nJoao - 22\n");

	printf("\nRosangela - 31\n");

	printf("\nLucas - 38\n");

	votar();

	return 0;
}

/*## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## #
## Autor: Jose Matheus O. Cavalcante; ##
## Concluido em: 18/06; ##
## Declaro que este codigo foi elaborado por mim de forma individual e nao contem nenhum ##
## trecho de cC3digo de outro colega ou de outro autor, tais como provindos de livros e ##
## apostilas, e paginas ou documentos eletrC4nicos da Internet. Qualquer trecho de cC3digo ##
## de outra autoria que nao a minha estC! destacado com uma citacao para o autor e a fonte ##
## do codigo, e estou ciente que estes trechos nao serao considerados para fins de avaliacao. ##
## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## ## # */
