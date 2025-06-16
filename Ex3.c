#include <stdio.h>

int ordenacao (int vet[], int tamanho);
void exibir (int vetor[],int tamanho);
void main()
{
    int i, tamanho,resposta;
    
    printf("Entre com o tamanho do vetor:");
    scanf("%d",&tamanho);
    
    int vet[tamanho];
    
    for(i=0;i<tamanho;i++)
    {
        printf("Entre com um valor:");
        scanf("%d",&vet[i]);
    }
    resposta=ordenacao (vet, tamanho);

    exibir (vet, tamanho);
    if(resposta==0)
    {
    printf("O vetor nao esta ordenado.");
    
    }
    else
    {
    printf("O vetor esta ordenado.");
    }   
}
int ordenacao (int vet[],int tamanho)
{
    int i;
    
    for(i=0;i<tamanho-1;i++)
    {
        if(vet[i]>vet[i+1])
        {
            return 0;
        }
    }

    return 1;
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