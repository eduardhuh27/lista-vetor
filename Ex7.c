
#include <stdio.h>

int remover (float vetor[],float valor,int *quantidade);
void exibir (float vetor[],int tamanho);

void main ()
{
    int i,resposta,quantidade;
    float valor;
    
    printf ("Entre com o tamanho do vetor:");
    scanf("%d",&quantidade);

    float vetor[quantidade];
    
    for(i=0;i<quantidade;i++)
    {
        printf("Entre com um valor:");
        scanf("%f",&vetor[i]);
    }
    
    exibir (vetor,quantidade);
    
    printf("Entre com o valor que sera removido:");
    scanf("%f",&valor);
    
    resposta= remover(vetor,valor,&quantidade);
    
    exibir (vetor,quantidade);
    
    printf("Quantidade de vezes que o numero escolhido foi removido: %d",resposta);
}

int remover( float vetor[],float valor,int *quantidade )
{
    int i, cont=0,novoIn;
    
    for (i=0;i<*quantidade;i++)
    {
        if(vetor[i]!=valor)
        {
            vetor[novoIn]=vetor[i];
            novoIn++;
        }
        else
        {
            cont++;
            
        }
    }
    
    (*quantidade)-=cont;
    return cont;
}
void exibir (float vetor[],int tamanho)
{
    
    int i;
    
    printf("Valores do vetor:");
    for (i=0;i<tamanho;i++)
    {
        printf("%.1f ",vetor[i]);
    }
    printf ("\n\n");
}