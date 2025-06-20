#include <stdio.h>

void troca (int vetor[],int numA, int numB,/* int *quantTroca,*/int tamanho);
void exibir (int vetor[],int tamanho);
void main()
{
    int i,  numA, numB, tamanho, vezes;
    
    printf("Entre com os numeros que vão ser trocados de posicao:");
    scanf("%d %d",&numA, &numB);
    
    printf("Entre com o tamaho do vetor:");
    scanf("%d",&tamanho);
    int vetor[tamanho];
    
    for  (i=0;i<tamanho;i++)
    {
        printf("Entre com um valor para preencher o vetor:");
        scanf("%d",&vetor[i]);
        
    }
    exibir (vetor,tamanho);
    
    troca (vetor,numA,numB,/*&vezes,*/tamanho);
    
    exibir (vetor,tamanho);
    
    //printf("%d",vezes);
}
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
void troca (int vetor[],int numA, int numB, /*int *quantTroca*/int tamanho)
{
    int i,j=0,k=0;
    
    for (i=0;i<tamanho;i++)
    {   
        if (vetor[i]==numA)
        {
            vetor[i]=numB;
        }
        /*(vetor[i]==numB)
        {
            k=i;
        }*/
    }
        //vetor[j]=numB;
        //vetor[k]=numA;
        //(*quantTroca)=1;
        //printf("%d",vetor[j]);
        //printf("%d",vetor[k]);
}