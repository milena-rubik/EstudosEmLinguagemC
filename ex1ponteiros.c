#include<stdlib.h>
#include<stdio.h>

/* Exercício 1:
Escreva um algoritmo em linguagem C com as seguintes instruções:
1. Declare três variáveis (inteiro, real e char);
2. Declare três ponteiros;
3. Associe as variáveis aos ponteiros;
4. Modifique os valores de cada variável indiretamente usando os ponteiros
associados. Para armazenar os valores nas variáveis, armazene na variável
char a primeira letra do seu nome, na variável inteira os dois últimos dígitos
do seu RU e na variável real os 4 últimos dígitos do seu RU, sendo os 2
últimos os valores com virgula;
5. Imprima na tela os valores das variáveis antes e após a modificação.*/

char nome='a', *pnome; //declara o ponteiro 'pnome' e a variável 'nome' atribuindo a ela o conteúdo 'a'
int ru=0, *pru; //declara o ponteiro 'pru' e a variável 'ru' atribuindo o valor '0' a ela
float dec=0.00, *pdec; //declara o ponteiro 'pdec' e a variável 'rdec' atribuindo o valor '0.00' a ela

int main()
{
    pnome=&nome; //o ponteiro 'pnome' guarda o endereço de 'nome'
    pru=&ru; //o ponteiro 'pru' guarda o endereço de 'ru'
    pdec=&dec; //o ponteiro 'pdec' guarda o endereço de 'dec'
    
    //imprime na tela os valores das variáveis nome, ru e dec:
    printf("Valores antes de modificar");
    printf("\n%c",nome);
    printf("\n%d",ru);
    printf("\n%f",dec);

    *pnome='m'; //modifica para 'm' o conteúdo da variável 'nome' através do ponteiro 'pnome' 
    *pru=13; //modifica para '13' o conteúdo da variável 'ru' através do ponteiro 'pru'
    *pdec=33.29; //modifica para '33,29' o conteúdo da variável 'dec' através do ponteiro 'pdec'
    
    //imprime na tela os valores das variáveis nome, ru e dec após as modificações realizadas com os ponteiros:
    printf("\n\nValores depois de modificar");
    printf("\n%c",nome);
    printf("\n%d",ru);
    printf("\n%.2f\n\n",dec);

system("PAUSE");
return(0);    


}