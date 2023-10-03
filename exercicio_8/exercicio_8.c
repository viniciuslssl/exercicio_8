#include<stdio.h>
#include<math.h>

//incompleto

main(){

int idade, contador_otimo = 0, contador_bom = 0, contador_regular = 0, contador_ruim = 0, contador_pessimo = 0;
int idade_ruim_total = 0, idade_otimo_max = -1, idade_ruim_max = -1;
int contador_geral = 0; 
char continuar;

printf("[Avaliacao - Black Cinemas Corporation]");
printf("\nInforme abaixo:");

do {
contador_geral++; 

    printf("\nResposta %d:", contador_geral);
    printf("\nIdade: ");
    scanf("%d", &idade);

    char opiniao;
    printf("\nOpiniao [A - Otimo ]- [B - Bom ]- [C - Regular ]- [D - Ruim ]-[E - Pessimo]: ");
    scanf(" %c", &opiniao);

    switch (opiniao) {

    case 'A':
    contador_otimo++;
    if (idade > idade_otimo_max) {
    idade_otimo_max = idade;
    }
    break;

    case 'B':
    contador_bom++;
    break;

    case 'C':
    contador_regular++;
    break;

    case 'D':
    contador_ruim++;
    idade_ruim_total += idade;

    if (idade > idade_ruim_max) {
        idade_ruim_max = idade;
    }
    break;

    case 'E':
    contador_pessimo++;
    break;

    default:

    printf("\nOpcao invalida.");

    contador_geral--; 
    continue; 

    }

    printf("\nDeseja continuar a pesquisa (S/N)? ");
    scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    printf("\nQuantidade de respostas Otimo: %d", contador_otimo);
    printf("\nDiferenca percentual entre respostas Bom e Regular: %.2f%%", (float)(contador_bom - contador_regular) / (contador_bom + contador_regular) * 100);
    
    if (contador_ruim > 0) {
        printf("\nMedia de idade das pessoas que responderam Ruim: %.2f", (float)idade_ruim_total / contador_ruim);
        printf("\nPercentagem de respostas Pessimo: %.2f%%", (float)contador_pessimo / contador_geral * 100);
        printf("\nMaior idade que utilizou a opcao Pessimo: %d", idade_ruim_max);
        if (idade_otimo_max != -1) {
            printf("\nDiferenca de idade entre a maior idade que respondeu Otimo e a maior idade que respondeu Ruim: %d", idade_otimo_max - idade_ruim_max);
        }
    } else {
        printf("\nNenhuma resposta Ruim.");
    }

    printf("\nContador geral de todas as pessoas cadastradas: %d", contador_geral);

}

include<stdio.h>
#include<math.h>

int main(){

char elevador, periodo, periodoMaisUsado, elevadorMaisUsado;
int teste, contadorA, contadorB, contadorC, maiorElevador, morador;
int periodoM, periodoV, periodoN, maiorPeriodo, menorPeriodo;
int totalServicos;
float direncaPercentual, diferencaServicos;

do{

	do{

		fflush(stdin);
		printf("\nQual elevador que voce mais utiliza? \nElevador-A \nElevador B \nElevador C \nInforme:");
		scanf("%c", &elevador);

	if(elevador != 'A' && elevador != 'B' && elevador != 'C'){
			printf("\nPor favor digite a vogal do elevador");
			}

		}while(elevador != 'A' && elevador != 'B' && elevador != 'C');

  if(elevador == 'A'){
    contadorA++;

    }else if (elevador == 'B'){
    contadorB++;

    }else if (elevador == 'C'){
    contadorC++;

    }
    do{

		printf("\nQual e o periodo que voce mais utiliza?\nMatutino - M\nVespertino - V\nNoturno - N\n");
		scanf("%c", &periodo);
    fflush(stdin);

		if(periodo != 'M' && periodo != 'V' && periodo != 'N'){
				printf("\nPor favor digite a vogal designada");
		}

		}while(periodo != 'M' && periodo != 'V' && periodo != 'N');

    if(periodo == 'M'){
    
      periodoM++;

    }else if (periodo == 'V'){

      periodoV++;

    }else if (periodo == 'N'){

      periodoN++;
  }

  if ((periodoM > periodoV) && (periodoM > periodoN)){

      maiorPeriodo = periodoM;
      periodoMaisUsado = 'M';

    }else  if ((periodoV > periodoM) && (periodoV > periodoN)){

      maiorPeriodo = periodoV;
      periodoMaisUsado = 'V';

    } if ((periodoN > periodoV) && (periodoN > periodoV)){

      maiorPeriodo = periodoN;
      periodoMaisUsado = 'N';

  }

  if ((periodoM < periodoV) && (periodoM < periodoN)){

      menorPeriodo = periodoM;
      periodoMaisUsado = 'M';

    }else  if ((periodoV < periodoM) && (periodoV < periodoN)){

      menorPeriodo = periodoV;
      periodoMaisUsado = 'V';

    } if ((periodoN < periodoV) && (periodoN < periodoV)){

    menorPeriodo = periodoN;

  }


  if ((contadorA > contadorB) && (contadorA > contadorC)){

      maiorElevador = contadorA;
      elevadorMaisUsado = 'A';

    } else  if ((contadorB > contadorA) && (contadorB > contadorC)){

      maiorElevador = contadorB;
      elevadorMaisUsado = 'B';

    } if ((contadorC > contadorB) && (contadorC > contadorA)){

      maiorElevador = contadorC;
      elevadorMaisUsado = 'C';
  }

  morador++;

  printf("\nQuer iniciar um novo formulario? \nSim - 2 \nNao - 1:");
  scanf("%d", &teste);

	} while(teste != 1);

  direncaPercentual = ((maiorPeriodo - menorPeriodo) / morador) * 100;
  totalServicos = (contadorA + contadorB + contadorC) / 3;
  diferencaServicos = (totalServicos / morador) * 100;

  printf("\nPeriodo mais usado dos elevadores: %c", periodoMaisUsado);
  printf("\nO elevador mais usado: %c", elevadorMaisUsado);
  printf("\nA diferenca do mais usado e do menos usado: %.2f", direncaPercentual);
  printf("\nO total de sevico: %.2f", diferencaServicos);

#include<stdio.h>
#include<math.h>


main(){

int n;
int fibonacci(int n) {

if (n <= 0) {

return 0;

} else if (n == 1) {

    return 1;

} else {

    return fibonacci(n - 1) + fibonacci(n - 2);

    }
}

printf("Digite um valor numerico: ");
scanf("%d", &n);

if (n < 0) {

    printf("\nO valor de n deve ser maior ou igual a zero.");

} else {
    int resultado = fibonacci(n);
    printf("\nO %d termo da sequencia de Fibonacci equivale: %d", n, resultado);
}

}
#include<stdio.h>
#include<math.h>


main(){

int numero;

printf("Digite um valor numerico: ");
scanf("%d", &numero);

if (numero <= 0) {
    printf("\nO valor deve ser positivo.");

} else {
    printf("\nOs divisores do valor %d equivalem: ", numero);

        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

//Muito dificil professora KKKKKKKKKK

#include <stdio.h>
#include <string.h>

#define MAX_JOGADORAS 5
#define MAX_ENTREVISTADOS 300

struct Jogadora {
    char nome[50];
    int votos;
};

int main() {
    struct Jogadora jogadoras[MAX_JOGADORAS];
    char nomes[MAX_JOGADORAS][50] = {"sam kerr - Australia", "alex morgan - Estados Unidos", "Dzsernifer Marozsan - Alemanha", "Amandine Henry - Franca", "Marta Vieira - Brasil"};
    int idade[MAX_ENTREVISTADOS];
    char sexo[MAX_ENTREVISTADOS];
    char voto[MAX_ENTREVISTADOS];

    int num_entrevistados = 0;

    for (int i = 0; i < MAX_JOGADORAS; i++) {
        jogadoras[i].votos = 0;
    }

    while (1) {
        printf("Entrevistado %d:\n", num_entrevistados + 1);
        printf("Nome: ");
        scanf(" %[^\n]", nomes[num_entrevistados]);
        printf("Idade: ");
        scanf("%d", &idade[num_entrevistados]);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo[num_entrevistados]);
        printf("Voto (1-5): ");
        scanf(" %c", &voto[num_entrevistados]);

        if (voto[num_entrevistados] < '1' || voto[num_entrevistados] > '5') {
            printf("Opcao de voto invalida.\n");
            continue;
        }

        int indice_jogadora = voto[num_entrevistados] - '1';
        jogadoras[indice_jogadora].votos++;

        num_entrevistados++;

        char continuar;
        printf("Deseja continuar (S/?)? ");
        scanf(" %c", &continuar);

        if (continuar != 'S' && continuar != 's') {
            break;
        }
    }

    int max_votos = jogadoras[0].votos;
    printf("Resultado da pesquisa:\n");
    printf("Jogadoras e quantidade de votos:\n");
    for (int i = 0; i < MAX_JOGADORAS; i++) {
        printf("%s: %d votos\n", nomes[i], jogadoras[i].votos);
        if (jogadoras[i].votos > max_votos) {
            max_votos = jogadoras[i].votos;
        }
    }

    printf("\nJogadoras mais votadas:\n");
    for (int i = 0; i < MAX_JOGADORAS; i++) {
        if (jogadoras[i].votos == max_votos) {
            printf("%s\n", nomes[i]);
        }
    }

    printf("\nInformacoes dos entrevistados:\n");
    int mulheres = 0, homens = 0, maiores_idade = 0, menores_idade = 0;
    for (int i = 0; i < num_entrevistados; i++) {
        printf("Nome: %s\n", nomes[i]);
        printf("Idade: %d\n", idade[i]);
        printf("Sexo: %c\n", sexo[i]);
        if (sexo[i] == 'M' || sexo[i] == 'm') {
            homens++;
        } else if (sexo[i] == 'F' || sexo[i] == 'f') {
            mulheres++;
        }
        if (idade[i] >= 18) {
            maiores_idade++;
        } else {
            menores_idade++;
        }
    }

    printf("\nQuantidade de homens: %d\n", homens);
    printf("Quantidade de mulheres: %d\n", mulheres);
    printf("Quantidade de maiores de idade: %d\n", maiores_idade);
    printf("Quantidade de menores de idade: %d\n", menores_idade);

    printf("\nMaiores Idades que votaram na Marta Vieira:\n");
    for (int i = 0; i < num_entrevistados; i++) {
        if (idade[i] >= 18 && strstr(nomes[i], "Marta Vieira") != NULL) {
            printf("Nome: %s\n", nomes[i]);
        }
    }
}
#include<stdio.h>
#include<math.h>

main(){

int ano, mes, dias;

while (1) {
    printf("Digite o mes (1-12) e o ano (ex: 02 2005): ");
    scanf("%d %d", &mes, &ano);

    if (mes < 1 || mes > 12) {
            printf("Mes invalido.\n");
            continue;
    }

    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {

    switch (mes) {
    case 2:
    dias = 29;
    break;

    case 4:
    case 6:
    case 9:
    case 11:
    dias = 30;
    break;

    default:
    dias = 31;
    break;

    }
    } else {

    switch (mes) {

    case 2:
    dias = 28;
    break;
    case 4: 
    case 6:
    case 9:
    case 11:
    dias = 30;
    break;

    default:
    dias = 31;
    break;

    }

    }

    printf("O mes %d/%d tem %d dias.\n", mes, ano, dias);

    char continuar;

    printf("Deseja Outras Entradas (S/?)?:");
    scanf(" %c", &continuar);

    if (continuar != 'S' && continuar != 's') {
        break;
        }
    }
  
}
o.h>
#include<math.h>

main(){

int num_pessoas = 10, num_homens = 0, num_mulheres = 0;
char nome[50];
char sexo;
float altura, peso, altura_total_homens = 0, altura_total_mulheres = 0, altura_total_grupo = 0, peso_total_homens = 0, peso_total_mulheres = 0, peso_total_grupo = 0;

for (int i = 0; i < num_pessoas; i++) {

printf("Pessoa %d:\n", i + 1);
printf("Nome: ");
scanf(" %[^\n]", nome);

printf("Sexo (M/F): ");
scanf(" %c", &sexo);

printf("Altura (em metros): ");
scanf("%f", &altura);

printf("Peso (em kg): ");
scanf("%f", &peso);

    if (sexo == 'M' || sexo == 'm') {
        num_homens++;
        altura_total_homens += altura;
        peso_total_homens += peso;

    } else if (sexo == 'F' || sexo == 'f') {
        num_mulheres++;
        altura_total_mulheres += altura;
        peso_total_mulheres += peso;

    }else {
        printf("Sexo invalido.\n");
        i--; // Repetir a entrada

    }

    altura_total_grupo += altura;
    peso_total_grupo += peso;
    }


    printf("Numero de homens: %d\n", num_homens);
    printf("Numero de mulheres: %d\n", num_mulheres);

    if (num_homens > 0) {

        printf("Altura media dos homens: %.2f metros\n", altura_total_homens / num_homens);
        printf("Peso medio dos homens: %.2f kg\n", peso_total_homens / num_homens);

    } else {
        printf("Nenhum homem no grupo.\n");
    }

    if (num_mulheres > 0) {

        printf("Altura media das mulheres: %.2f metros\n", altura_total_mulheres / num_mulheres);
        printf("Peso medio das mulheres: %.2f kg\n", peso_total_mulheres / num_mulheres);

    } else {

        printf("Nenhuma mulher no grupo.\n");
    }

    printf("\nAltura media do grupo: %.2f metros", altura_total_grupo / num_pessoas);
    printf("\nPeso medio do grupo: %.2f kg\n", peso_total_grupo / num_pessoas);

}