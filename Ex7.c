
#include <stdio.h>

int remover (float vetor[],float valor, int tamanho);
void exibir (float vetor[],int tamanho);

void main ()
{
    int i, tamanho,resposta;
    float valor;
    
    printf ("Entre com o tamanho do vetor:");
    scanf("%d",&tamanho);

    float vetor[tamanho];
    
    for(i=0;i<tamanho;i++)
    {
        printf("Entre com um valor:");
        scanf("%f",&vetor[i]);
    }
    
    exibir (vetor,tamanho);
    
    printf("Entre com o valor que sera removido:");
    scanf("%f",&valor);
    
    resposta= remover(vetor,valor,tamanho);
    
    printf("Quantidade de vezes que o numero escolhido foi removido: %d",resposta);
}

int remover( float vetor[],float valor,  int tamanho)
{
    int i, cont=0;
    
    for (i=0;i<tamanho;i++)
    {
        if(vetor[i]==valor)
        {
            
            vetor[i]=0;
            cont++;
            
        }
    }
    
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