#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contador (int vetorA[], int escolhido,int tamanho);
void preencherale (int vetorA[],int tamanho,int limite);
void exibir (int vetorA[],int tamanho);
void main ()
{
  int numero,tamanho,repetidos;
  
  printf("Entre com um numero:");
  scanf("%d",&numero);

  printf ("Entre com o tamanho do vetor:");
  scanf("%d",&tamanho);
  
  int vetorA[tamanho]; 
  
  preencherale (vetorA, tamanho,100);

  exibir(vetorA,tamanho);

  repetidos= contador(vetorA,numero,tamanho);

  printf("Quantidade de %d repetidos: %d",numero,repetidos);
}
int contador (int repetidos[],  int escolhido,int tamanho)
{
  int i,cont=0;
  for (i=0;i<tamanho;i++)
  {
  
    printf("Entre com um numero:");
    scanf("%d",repetidos[i]);

    if (repetidos[i]==escolhido)
    {
      cont++;
    }
  }
  return cont;
}

void preencherale (int vetorA[], int tamanho,int limite)
{
  int i;

  srand (time(NULL));

  for (i=0;i<tamanho;i++)
  {
    vetorA[i]= rand()%100;
  }
}
void exibir (int vetorA[],int tamanho)
{
  int i;

  for(i=0;i,tamanho;i++)
  {
    printf("%d",vetorA[i]);
  }
  printf("\n\n");
}