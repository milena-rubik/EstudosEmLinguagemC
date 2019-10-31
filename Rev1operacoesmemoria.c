#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Revisão para a prova - Operações em memória

int main()
{
    //função memset preenche (inicializa) quantidade de memória 
    //sintaxe void*memset(void*nPonteiro,int nValor, size_t NBytes)
    printf("\n\nExemplo de memset\n");
    char exset[10]= "Exemplo";
    puts(exset); //coloca string na saida de dados
    memset(exset,0,3);//preenche com '0' as 3 primeiras posições de 'exset'
    puts(exset);
    memset(exset,"a",4);
    
    //função memcpy copia uma quantidade de bytes de uma área de memória para outra
    //sintaxe void*memcpy(void*pDestino, void* pOrigem, size_t num)
    printf("\n\nExemplo de memcpy\n");
    const char ori[40] = "teste de memo";
    char dest[40];
    int tamanho;
    tamanho=strlen(ori); //strlen serve para descobrir tamanho de uma string
    printf("Tamanho da string %s: %d\n\n",ori,tamanho);
    memcpy(dest, ori, tamanho);
    printf("depois de aplicar memcpy: %s\n",dest);
    
    //função memmove() faz cópia de memória de forma mais segura, também faz compração de memória
    //sintaxe Void*memmove(void*pDestino, void*pOrigem, size_t num)
    printf("\n\nExemplo de memmove\n");
    char exem[8] = "teste de memo 2"
    printf("string original: %s\n",exem);
    memmove(exem+3,exem,4);
    printf("nova string: %s\n",exem);
    
    //função memcmp() compara as n primeiras posições de duas strings (de 0 a n-1)
    //sintaxe Int memcmp(void*pRegiao1, void*pRegião2, size_tN)
    printf("\n\nExemplo de memcmp\n");
    char str1[15]= "teste de memo3";
    char str2[15]; "TESTE DE MEMO3";
    int ret;
    ret = memcmp(str1,str2,7);
    if(ret>0)
    {
        printf("str1 e' maior que str2\n");
    }
    else if(ret<0)
    {
        printf("str2 e' maior que str1/n");
    }
    else
    {
        printf("str1 é igual a str2/n");
    }
    
    
    system("pause");
    return 0;
}
    
    
    
    
    
    system("pause");
    return 0;
}
