#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Revisão para a prova - Operações em memória

int main()
{
    //função memset preenche (inicializa) quantidade de memória 
    //sintaxe void*memset(void*nPonteiro,int nValor, size_t NBytes)
    printf("Exemplo de memset");
    char exset[10]= "Exemplo";
    puts(exset); //coloca string na saida de dados
    memset(exset,0,3);
    puts(exset);
    memset(exset,"a",4);
    
    //função memcpy copia uma quantidade de bytes de uma área de memória para outra
    //sintaxe void*memcpy(void*pDestino, void* pOrigem, size_t num)
    const char ini[40] = "teste de memo";
    char fini[40];
    int tamanho;
    tamanho=strlen(ini); //strlen serve para descobrir tamanho de uma string
    printf("Tamanho da string %s: %d\n\n",ini,tamanho);
    memcpy(fini, ini, tamanho);
    printf("depois de aplicar memcpy: %s\n",fini);
    
    //função memmove() faz cópia de memória de forma mais segura, também faz compração de memória
    //sintaxe Void*memmove(void*pDestino, void*pOrigem, size_t num)
    
    
    system("pause");
    return 0;
}
