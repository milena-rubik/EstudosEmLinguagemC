#include<iostream>
#include<stdio.h>
#include<stdlib.h>

//Revisão prova - Operações com arquivos modos R, W e A

int main ()
{
FILE *arq; //declara um ponteiro para arquivo
char ch;
printf("Digite o caractere a ser inserido no arquivo ");
ch=getchar();
arq = fopen("arquivox.txt","w");
/* A função fopen abre o arquivo. Há duas formas de especificar o caminho do arquivo:caminho 
absoluto no qual o endereço completo é descrito fopen("C:\\Userx\\pastax\\arquivox.txt","r")
ou caminho relativo ao diretório do programa fopen("arquivox.txt","r").
Quanto ao conteúdo entre aspas depois do nome do arquivo o abre:
"r" unicamente para leitura, "r+" leitura e escrita,"rb" modo binário para leitura;
"w" escrita, "w+" leitura e escrita, "wb" escrita no modo binário;
"a" anexar, "a+" leitura ou escrita ao final do arquivo, "ab" anexar modo binário */
if(arq==NULL)  
{
printf("Erro na abertura do arquivo ");
}
  else
  {
    fputc(ch, arq);//insere o caractere no arquivo
    fclose(arq); //fecha o arquivo
  }
  

system("pause");
return 0;
}
