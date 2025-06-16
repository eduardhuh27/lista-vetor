#include <stdio.h>

void  preencher (int vetorO[],int vetorP[],int vetorI[],int tamanho,int *quantP, int  *quantI);

//void exibir (int vetorP[],int vetorO[],int vetorI[], int tamanho);

void main ()
{
    int i,tamanho,quantP,quantI;
    
    printf("Entre com o tamanho do vetor:");
    scanf("%d",&tamanho);
    int vetorO[tamanho];
    int vetorP[tamanho];
    int vetorI[tamanho];
    
    for (i=0;i<tamanho;i++)
    {
        printf("Entre com um valor:");
        scanf("%d",&vetorO[i]);
    }
    
    preencher (vetorO,vetorP,vetorI,tamanho,&quantP,&quantI);
   // exibir (vetorP,vetorO,vetorI,tamanho);
    
    
    
    printf("Quantidade de valores no vetor Par:%d\n",quantP);
    printf("Quantidade de valores no vetor Impar:%d\n",quantI);
    
}
void  preencher (int vetorO[],int vetorP[],int vetorI[],int tamanho,int *quantP, int  *quantI)
{
    int i, contP=0,contI=0;
        
    for(i=0;i<tamanho;i++)
    {
        if(vetorO[i]%2==0)
        {
            vetorP[contP]=vetorO[i];
            contP++;
            *quantP=contP;
        }
        else
        {
            vetorI[contI]=vetorO[i];
            contI++;  
            *quantI=contI;
        }
        exibir (vetorP,vetorO,vetorI,tamanho);
    }
}
    
   /* void exibir (int vetorP[],int vetorO[],int vetorI[], int tamanho)
    {
        int i;
        
        for (i=0;i<tamanho;i++)
        {
            printf("%d",vetorO[i]);
            printf("%d",vetorP[i]);
            printf("%d",vetorI[i]);
        }
        
    }*/
    
    
    
    
    
    
    
