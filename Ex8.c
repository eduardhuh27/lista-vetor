#include <stdio.h>

int posicao (float vetor[],int tamanho, float valor,int *ordem);
void exibir (float vetor[],int tamanho);

void main()
{
    int loc,ordem;
    float valor;
    float vetor[5] = {4.1,4.8,5.1,5.6,6.5};
    
    exibir (vetor,5);    
    
    printf("Entre com o valor para saber a sua posicao:");
    scanf("%f",&valor);
    
    loc= posicao (vetor,5,valor,&ordem);
    if (ordem==0)
    {
        printf("Esta em ordem\nPosicao do numero selecionado:%d",loc);

    }
    else
    {
        printf("Esta fora de ordem\nPosicao do numero selecionado:%d",loc);    
    }
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
int posicao (float vetor[],int tamanho, float valor,int *ordem)
    {
        int i;
        float temp;
        *ordem=0;
        
        for(i=0;i<tamanho;i++)
        {
            if(vetor[i]<vetor[i-1])
            {
                temp=vetor[i-1];
                exibir (vetor,5);
                vetor[i-1]=vetor[i];
                exibir (vetor,5);
                vetor[i]=temp;
                exibir (vetor,5);
                i=0;
                *ordem=1;
            }
            if (vetor[i]>vetor[i-1])
            {
                if(vetor[i]>=valor)
                {
                    return i;
                }
            }        
        }
        
    return tamanho;
    }