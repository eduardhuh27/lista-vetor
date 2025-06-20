#include <stdio.h>

int posicao (float vetor[],int tamanho, float valor,int *ordem, int quantidade);
void exibir (float vetor[],int tamanho);
int inserir (float vetror[],float valor,int *quantidade, int capacidade,int posicao);
void main()
{
    int loc,ordem,quantidade,capacidade,certo;
    float valor;
    float vetor[8] = {4.1,4.8,5.1,4.9,6.5,};
    capacidade=8;
    quantidade=5;
    exibir (vetor,quantidade);    
    
    printf("Entre com o valor para saber a sua posicao:");
    scanf("%f",&valor);
    
    loc= posicao (vetor,quantidade,valor,&ordem,quantidade);
    if (ordem==0)
    {
        printf("Esta em ordem\nPosicao do numero selecionado:%d",loc);

    }
    else
    {
        printf("Esta fora de ordem\nPosicao do numero selecionado:%d\n\n",loc);  
    }
    
   certo=inserir (vetor,valor, &quantidade,capacidade,loc);
   exibir(vetor,quantidade);
    if (certo==1)
    {
        printf("O numero foi inserido\n\n");

    }
    else
    {
        printf("O numero nao foi inserido\n\n");  
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
int posicao (float vetor[],int tamanho, float valor,int *ordem,int quantidade)
    {
        int i,local,cont=0;
        float temp;
        *ordem=0;
        
        for(i=0;i<tamanho;i++)
        {
            if(vetor[i]<vetor[i-1])
            {
                temp=vetor[i-1];
                exibir (vetor,quantidade);
                vetor[i-1]=vetor[i];
                exibir (vetor,quantidade);
                vetor[i]=temp;
                exibir (vetor,quantidade);
                i=0;
                *ordem=1;
                i=0;
                i=0;
            }
            else
            {
                if(vetor[i]>=valor)
                {
                    cont++;
                    if(cont==1)
                    {
                    local=i;
                    }
                    }
            }        
        }
        if(local<tamanho)
        {
            return local;
        }
        else
        {
        return tamanho;
        }
    }
    
int inserir (float vetor[], float valor, int *quantidade,int capacidade,int posicao)
  {
      int i;
     if(*quantidade<capacidade) 
    {
        
        for(i=*quantidade-1;i>=posicao;i--)
        {
            vetor[i+1]=vetor[i];
        }

vetor[posicao]=valor;
        
        (*quantidade)++;
        
        return 1;
    }
    else
    {
        return 0;
    }
    
      
  }  