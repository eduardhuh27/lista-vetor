#include <stdio.h>

void uniao (int vetorA[],int vertorB[],int vetorC[],int tamanhoA, int tamanhoB,int *tamanhoC);
//void uniao (int vetA[], int quantA, int vetB[], int quantB, int vetC[], int *quantC);
void exibir (int vetor[],int tamanho);
int buscar (int vetor[],int valor,int tamanho);
//int buscarP (int vetor[], int quantidade, int valor);
void main ()
{
    int i, tamanhoA ,tamanhoB,tamanhoC;
    
    printf("Entre com o tamanho do vetorA:");
    scanf("%d",&tamanhoA);
    
    printf("Entre com o tamanho do vetorB:");
    scanf("%d",&tamanhoB);
    
    int vetorA[tamanhoA];
    int vetorB[tamanhoB];
    tamanhoC=tamanhoA+tamanhoB;
    int vetorC[tamanhoC];
    for  (i=0;i<tamanhoA;i++)
    {
        printf("Entre com um valor para preencher o vetorA:");
        scanf("%d",&vetorA[i]);
    }
    for  (i=0;i<tamanhoB;i++)
    {
        printf("Entre com um valor para preencher o vetorB:");
        scanf("%d",&vetorB[i]);
    }
    uniao (vetorA,vetorB,vetorC,tamanhoA,tamanhoB,&tamanhoC);
    exibir (vetorA,tamanhoA);
    exibir (vetorB,tamanhoB);
    exibir (vetorC,tamanhoC);
}
void uniao (int vetorA[],int vetorB[],int vetorC[],int tamanhoA, int tamanhoB,int *tamanhoC)
{
    int i,j;
    for (i=0;i<tamanhoA;i++)
    {
        vetorC[i]=vetorA[i];
    }
    j=tamanhoA;
    for(i=0;i<tamanhoB;i++)
    {
        if( buscar (vetorA,vetorB[i],tamanhoA) == -1)
        {
            vetorC[j]=vetorB[i];
            j++;
        }
    }
    *tamanhoC=j;
}
/*void uniao (int vetA[], int quantA, int vetB[], int quantB, int vetC[], int *quantC)
{
	//declaração de variáveis
	int i, pos;
	
	//copiando todos os elementos do primeiro vetor para o vetor união
	for (i=0;i<quantA;i++)
	{
		vetC[i] = vetA[i];
	}
		
	//copiando para o vetor união todos os elementos do segundo vetor que não estejam no primeiro
	pos = quantA;
	for (i=0;i<quantB;i++)
	{
		if (buscar (vetA, quantA, vetB[i]) == -1)
		{
			vetC[pos] = vetB[i];
			pos++;
		}
	}
	
	//armazenando em quantC a quantidade de elementos da união
	*quantC = pos;
}*/

void exibir (int vetor[],int tamanho)
{
    
    int i;
    
    printf("Valores do vetor:");
    for (i=0;i<tamanho;i++)
    {
        printf("%d ",vetor[i]);
    }
    printf ("\n\n");
}
int buscar (int vetor[],int valor,int tamanho)
{
    int i;
    for(i=0;i<tamanho;i++)
    {
        if(vetor[i] == valor)
        {
            return i;        
        } 
       
    }
    return -1;
}
/*
int buscarP (int vetor[], int quantidade, int valor)
{
	//declaração de variáveis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<quantidade;i++)
	{
		if (vetor[i] == valor)
		{
			return i;
		}
	}
	
	return -1;
}*/
