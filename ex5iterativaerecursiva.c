#include <stdio.h>
#include<stdlib.h>

/*  Exercício 5:
Faça um algoritmo em linguagem C que contenha dois números inteiros digitados na tela pelo usuário:
a. O primeiro número marca um início;
b. O segundo número marca um fim;
O algoritmo vai contar quantos números existem entre o início (primeira entrada) e o fim (segunda entrada). 
A impressão na tela do usuário deve ser realizada de duas formas:
a. Iterativa;
b. Recursiva;
Ao colocar no seu relatório uma imagem do seu código funcionando, coloque ele rodando utilizando como valor 
de inicio os 2 últimos valores do seu RU e valor final o número 99.*/

//declaração das variáveis globais a serem utilizadas
int imprimen (int inicio, int fim); 
int ti = 0; 
int tr = 0;

int main() {
    int comeco, fim, i;//declaração das variáveis a serem utilizadas na função principal
    
    printf("Digite o primeiro numero\n");
    scanf("%d",&comeco); //atribuição do número fornecido para a variável 'comeco'
    
    printf("Digite o ultimo numero\n");
    scanf("%d",&fim); //atribuição do número fornecido para a variável 'fim'
    
    printf("FORMA ITERATIVA\n");
        for(i=comeco+1;i<fim;i++){ //sempre que 'i' for menor que 'fim' os comandos dentro de 'for' serão executados e 'i' incrementado 
        printf("%d  ",i); //imprime o valor de 'i'
        ti++; //incrementa 'tr' 
    } 
   
    printf("\ntotal de numeros entre o primeiro e o ultimo: %d  ",ti); //imprime ti - quantos números há ENTRE 'comeco' e 'fim'

   
    printf("\n\nFORMA RECURSIVA\n"); 
    imprimen(comeco,fim); //chama a função recursiva auxiliar imprimen no programa principal
    printf("\n\ntotal de numeros entre o primeiro e o ultimo: %d \n\n",tr); //imprime 'tr' - quantos números há ENTRE 'comeco' e 'fim'
    
    system("pause");
    return 0;
}
int imprimen (int comeco, int fim){ //declaração da função auxiliar recursiva
    if(comeco<fim-1){ //Se 'comeco' for menor que 'fim-1' o comando abaixo será executado
        printf("%d  ",comeco+1); //imprime o valor de 'comeco+1'
        imprimen(comeco+1,fim); //chamada recursiva da função, será executada até que o valor de 'comeco+1' seja igual ao de 'fim'
        tr ++; //incrementa tr 
    }

}
