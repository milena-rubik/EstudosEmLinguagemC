#include <stdio.h>
#include <conio.h>

/* Exercício 3:
Faça um algoritmo em linguagem C com as seguintes funcionalidades:
1 Receba um registro, com dois campos, como dados de entrada.
2 O primeiro campo é um vetor que vai armazenar o nome do aluno.
3 O segundo campo é uma variável do tipo inteiro que vai armazenar o RU do aluno.
4 Imprime na tela os dados armazenados na estrutura.*/

int main(void) //Função principal do programa
{
  
  struct registro //cria a Struct 'Registro'
  {
    char nome[50]; //declara variável interna da struct'nome' do tipo 'char', vetor de 50 posições
    int ru; //declara variável interna da struct 'ru' do tipo int
  };
  
  struct registro reg; //'reg' é a variável que irá utilizar a struct
  
  printf("\n Registro de Aluno\n"); //Imprime na tela o conteúdo entre aspas
  
  printf("Informe o nome do aluno "); //Imprime na tela o conteúdo entre aspas
  fflush(stdin); // entrada padrão para leitura de dados a partir do teclado
  fgets(reg.nome, 50, stdin); //lê os dados do teclado e armazena na variável 'reg' na variável interna 'nome'
  
  printf("Informe o RU  "); //Imprime na tela o conteúdo entre aspas
  scanf("%d",&reg.ru); //obtem dados informados e armazena na variável 'reg' na variável interna 'ru'
  
    
  printf("\n\n Cadastro Efetuado! \n\n"); //Imprime na tela o conteúdo entre aspas
  printf("Nome: %s", reg.nome); //Imprime na tela o conteúdo da variável interna 'nome' da variável 'reg'
  printf("RU: %d\n" , reg.ru); //Imprime na tela o conteúdo da variável interna 'ru' da variável 'reg'
  
  
  getch();
  return(0);
}
