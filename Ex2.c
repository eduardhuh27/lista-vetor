//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int numOcorrencias (int vetor[], int tamanho, int numero);

void preencherAleatorio (int vetor[], int tamanho, int limite);
void exibir (int vetor[], int tamanho);

//main
void main ()
{	
	//declaração de variáveis
	const int tamanho = 20;
	int vet[tamanho];
	int valor,quant;
	
	//preenchendo o vetor
	preencherAleatorio (vet, tamanho, 100);
	
	//exibindo os elementos do vetor
	exibir (vet, tamanho);
	
	//lendo o dado a ser buscado no vetor
	printf ("Numero a ser buscado no vetor: ");
	scanf ("%d", &valor);
	
	//chamando a função
	quant = numOcorrencias (vet, tamanho, valor);
	
	//exibindo a resposta
	printf ("\nO valor %d foi encontrado %d vezes no vetor!", valor, quant);
}

//implementação das funções
int numOcorrencias (int vetor[], int tamanho, int numero)
{
	//declaração de variáveis
	int i, cont = 0;
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando se 'numero' está na posição 'i' do vetor
		if (vetor[i] == numero)
		{
			cont++;
		}
	}
	
	return cont;
}

void preencherAleatorio (int vetor[], int tamanho, int limite)
{
	//declaração de variáveis
	int i;
	
	srand (time(NULL));
	
	//preenchendo o vetor
	for (i=0;i<tamanho;i++)
	{
		vetor[i] = rand()%limite;
	}
}

void exibir (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//exibindo os elementos do vetor
	printf ("\n\nElementos do vetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", vetor[i]);
	}
	printf ("\n\n");
}
