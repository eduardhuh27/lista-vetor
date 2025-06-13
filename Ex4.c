    #include <stdio.h>
    
    void preencher (int vetor[],int tamanho);
    
    void main()
{
    int tamanho;
    
    printf("Entre com o tamanho do vetor:");
    scanf("%d",&tamanho);
    
    int vetor[tamanho];
    
    preencher (vetor,tamanho);

}

void preencher (int vetor[],int tamanho)
{
    int i,soma=1, j=1;
    
    for (i=0;i<tamanho;i++)
    {
        vetor[i]=soma;
        soma+=j;
        j++;
    
        printf("%d",vetor[i]);
        
    }
}

