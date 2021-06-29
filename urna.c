#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int nulo;
//candidatos
int cand1; // thamires
int cand2; // joao
int cand3; // rosangela
int cand4; // lucas

int totvotos; // = cand1+cand2+cand3+cand4;

//contador feminino e masculino
int masc;
int fem;

//percentual
float totpercent_feminino;
float totpercent_masculino;
float totpercent_nulo;
float totpercent_cand1;
float totpercent_cand2;
float totpercent_cand3;
float totpercent_cand4;

double tot;

int maiormenor()
{
}
//-------------------------------------------------------

int percentual()
{
	//Aqui calculamos a porcentagem de votos e apresentamos ao usuario conforme os requisitos da atividade
	totpercent_feminino = fem * 100 / totvotos;
	totpercent_masculino = masc * 100 / totvotos;
	totpercent_nulo = nulo * 100 / totvotos;
	totpercent_cand1 = cand1 * 100 / totvotos;
	totpercent_cand2 = cand2 * 100 / totvotos;
	totpercent_cand3 = cand3 * 100 / totvotos;
	totpercent_cand4 = cand4 * 100 / totvotos;

	printf("\n O Total de votos femininos em percentual e de: %.1f%%", totpercent_feminino);
	printf("\n O Total de votos masculino em percentual e de: %.1f%%", totpercent_masculino);
	printf("\n O Total de votos nulo/em branco em percentual e de: %.1f%%\n", totpercent_nulo);
	printf("\n O Total de votos na candidata Thamires em percentual e de: %.1f%%\n", totpercent_cand1);
	printf("\n O Total de votos no candidato Joao em percentual e de: %.1f%%\n", totpercent_cand2);
	printf("\n O Total de votos na candidata Rosangela em percentual e de: %.1f%%\n", totpercent_cand3);
	printf("\n O Total de votos na candidato Lucas em percentual e de: %.1f%%\n", totpercent_cand4);
}
//-------------------------------------------------------
int votar()
{

	int candidato, confirmador;

	system("cls");

	printf("Para Voto NULO ou BRANCO, digite 111 no candidato.\n\nDigite o numero do candidato:");

	scanf("%d", &candidato);

	switch (candidato)

	{

	case 111:

		system("cls");

		printf("Seu voto e: NULO OU BRANCO. \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");

		scanf("%d", &confirmador);

		if (confirmador == 1)

		{

			nulo = nulo + 1;

			system("cls");

			printf("Voto confirmado, obrigado por votar! \n\n\n");

			sleep(5);
		}

		if (confirmador == 2)

		{

			votar();
		}

		if ((confirmador != 1) && (confirmador != 2))

		{

			system("cls");

			printf("Escolha incorreta, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
		}

		votar();

		break;

	case 666:
		//mostrando o relat�rio final
		totvotos = cand1 + cand2 + cand3 + cand4;

		printf("*****************************************\n");

		printf("--------------ELEICOES 2021-------------\n");

		printf("*****************************************\n");

		printf("\nThamires: %d VOTOS\n", cand1);

		printf("\nJoao %d VOTOS\n", cand2);

		printf("\nRosangela: %d VOTOS\n", cand3);

		printf("\nLucas: %d VOTOS\n", cand4);

		printf("\nBRANCOS OU NULOS: %d VOTOS\n", nulo);
		printf("\nTotal de votos e: %d Votos \n", totvotos);
		printf("\nTotal de votos FEMININOS e: %d Voto(s)  \n", fem);
		printf("\nTotal de votos MASCULINOS e: %d Voto(s)  \n", masc);

		percentual();

		sleep(160);

		break;

	case 17:

		system("cls");

		printf("Vai votar em Thamires Gente boa? tem certeza? \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");

		scanf("%d", &confirmador);

		if (confirmador == 1)

		{

			cand1 = cand1 + 1;
			//contador de votos femininos
			fem++;

			system("cls");

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

			system("cls");

			printf("Escolha incorreta, seu voto vai ser considerado nulo. Ate a proxima eleicao.");
			nulo = nulo + 1;
		}

		votar();

		break;

	case 22:

		system("cls");

		printf("Vai votar em Joao? tem certeza? \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");

		scanf("%d", &confirmador);

		if (confirmador == 1)

		{

			cand2 = cand2 + 1;
			//contador de votos masculinos
			masc++;

			system("cls");

			printf("Voto confirmado, boa sorte!\n\n\n");

			sleep(5);
		}

		if (confirmador == 2)

		{

			votar();
		}

		//caso o usuario digite a tecla errada na hora de confirmacao
		if ((confirmador != 1) && (confirmador != 2))

		{

			system("cls");

			printf("Escolha incorreta, seu voto vai ser considerado nulo. Ate a proxima eleicao.");
			nulo = nulo + 1;
		}

		votar();

		break;

	case 31:

		system("cls");

		printf("Vai votar em Rosangela? tem certeza? \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");

		scanf("%d", &confirmador);

		if (confirmador == 1)

		{

			cand3 = cand3 + 1;
			//contador de votos femininos
			fem++;

			system("cls");

			printf("Voto confirmado, boa sorte!\n\n\n");

			sleep(5);
		}

		if (confirmador == 2)

		{

			votar();
		}

		//caso o usuario digite a tecla errada na hora de confirmacao
		if ((confirmador != 1) && (confirmador != 2))

		{

			system("cls");

			printf("Escolha incorreta, seu voto vai ser considerado nulo. Ate a proxima eleicao.");
			nulo = nulo + 1;
			printf("\n------Candidatos dessa temporada-----\n");

			printf("\nThamires gente boa - 17\n");

			printf("\nJoao - 22\n");

			printf("\nRosangela - 31\n");

			printf("\nLucas - 38\n");
		}

		votar();

		break;

	case 38:

		system("cls");

		printf("Vai votar em Lucas? tem certeza? \nConfirma o voto? \n\n1-CONFIRMA\n2-CANCELAR\n\n");

		scanf("%d", &confirmador);

		if (confirmador == 1)

		{

			cand4 = cand4 + 1;
			//contador de votos masculinos
			masc++;

			system("cls");

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

			system("cls");

			printf("Opcao invalida, digite 1 para CONFIRMAR ou 2 para CANCELAR.");
		}

	default:

		system("cls");

		printf("Candidato invalido, digite o numero do partido. \n\n");
		printf("\n------Candidatos dessa temporada-----\n");

		printf("\nThamires gente boa - 17\n");

		printf("\nJoao - 22\n");

		printf("\nRosangela - 31\n");

		printf("\nLucas - 38\n");

		sleep(3);
	}

	votar();
}

//-------------------------------------------------------
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

	printf("\n\nPara sair, ou ver o relatorio, digite 666.\nPara iniciar aperte qualquer tecla.\n\n");

	printf("\n------Candidatos dessa temporada-----\n");

	printf("\nThamires gente boa - 17\n");

	printf("\nJoao - 22\n");

	printf("\nRosangela - 31\n");

	printf("\nLucas - 38\n");
	getchar();

	votar();

	return 0;
}
