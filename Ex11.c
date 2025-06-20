#include <stdio.h>

void intersecao (int vetorA[],int vertorB[],int vetorC[],int tamanhoA, int tamanhoB,int *tamanhoC);
void exibir (int vetor[],int tamanho);
int buscar (int vetor[],int valor,int tamanho);
void main ()
{
    int i, tamanhoA ,tamanhoB,tamanhoC;
    
    printf("Entre com o tamanho do vetorA:");
    scanf("%d",&tamanhoA);
    
    printf("Entre com o tamanho do vetorB:");
    scanf("%d",&tamanhoB);
    
    int vetorA[tamanhoA];
    int vetorB[tamanhoB];
    if(tamanhoA<tamanhoB)
    {
        tamanhoC=tamanhoA;
    }
    else
    {
        tamanhoC=tamanhoB;
    }
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
    intersecao (vetorA,vetorB,vetorC,tamanhoA,tamanhoB,&tamanhoC);
    exibir (vetorA,tamanhoA);
    exibir (vetorB,tamanhoB);
    exibir (vetorC,tamanhoC);
}
void intersecao (int vetorA[],int vetorB[],int vetorC[],int tamanhoA, int tamanhoB,int *tamanhoC)
{
    int i,j=0;
    
    for(i=0;i<tamanhoB;i++)
    {
        if( buscar (vetorA,vetorB[i],tamanhoA) != -1)
        {
            vetorC[j]=vetorB[i];
            j++;
        }
    }
    *tamanhoC=j;
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

