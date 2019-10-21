#include<stdlib.h>
#include<stdio.h>

/* Exercício 2:
Escreva um algoritmo em LINGUAGEM C que armazene na memória o seu RU e o valor 1234567, ambos digitados pelo usuário na tela 
Em seguida, imprima na tela ambos RU usando ponteiros. O algoritmo também vai ter que comparar os dois RU usando ponteiros e 
imprimir na tela qual é o maior. */

int ra,*pra, ru, *pru; //declara as variáveis 'ra' e 'ru' e os ponteiros 'pra' e 'pru', todos tipo int

int main()
{
    
    printf("\nDigite o numero 1383329 correspondente ao RU do aluno\n");
    scanf("%d",&ra); //guarda o valor do 1 RU informado na variável ra
    
    pra=&ra; //atribui ao ponteiro 'pra' o endereço de 'ra'

    printf("\nDigite o numero 1234567\n");
    scanf("%d",&ru); //guarda o valor informado na variável ru
    
    pru=&ru; //atribui ao ponteiro 'pru' o endereço de 'ru'

    if(*pra > *pru) //Se o conteúdo da variável para qual aponta 'pra' for maior do que a'pru' aponta, o comando abaixo será executado
    {
    
          printf("\n\nO valor %d eh o maior\n",*pra);
    
    }else{ //Caso a condição anterior não seja atendida, o comando abaixo é que será executado
        printf("\n\nO valor %d eh o maior\n\n\n",*pru);
    }
  
  system("PAUSE");
  return(0);

}