#include <stdio.h> 
#include <conio.h> 
/*Exercício 4:
Replique o exercício 3. Porém, agora, declare um ponteiro para a estrutura de dados heterogênea. No momento da leitura dos 
dados e da impressão na tela, use o ponteiro para buscar o conteúdo dos campos. Imprima na tela também o seu RU na tela.*/

int main(void)  
{
struct registro//cria a Struct 'Registro'  
{
char nome[50]; //declara variável interna da struct'nome' do tipo 'char', vetor de 50 posições
int ru; //declara variável interna da struct 'ru' do tipo int 
}; 

struct registro reg, *preg; //'reg' é a variável que irá utilizar a struct e '*preg' o ponteiro
preg=&reg; //atribui o endereço de 'reg' ao ponteiro 'preg'
printf("\n Registro de Aluno \n"); //Imprime na tela o conteúdo entre aspas 
printf("Informe o nome do aluno "); //Imprime na tela o conteúdo entre aspas 
fflush(stdin); // entrada padrão para leitura de dados a partir do teclado 
fgets(preg->nome, 50, stdin); //armazena o digitado na variável 'reg' na variável interna 'nome' através do ponteiro 'preg'
printf("Informe o RU "); //Imprime na tela o conteúdo entre aspas 
scanf("%d",&preg->ru); //armazena o digitado na variável 'reg' na variável interna 'ru' através do ponteiro 'preg'
printf("\n\n Cadastro Efetuado! \n\n"); //Imprime na tela o conteúdo entre aspas 
printf("Nome: %s", preg->nome); //Imprime na tela o conteúdo da variável interna 'nome' da variável 'reg' através do ponteiro 'preg' 
printf("RU: %d\n" , preg->ru); //Imprime na tela o conteúdo da variável interna 'ru' da variável 'reg' através do ponteiro 'preg'

getch(); 
return(0); 
    
} 

