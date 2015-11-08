
/**************************************   
* Trabalho 3 de Programacao de Computadores I - Batalha Naval 
* Curso de Sistemas da informacao  
* Aluno: Paula Galindo - matricula: 0050013381 
* Professor: Alex Salgado
***************************************/
#include <stdio.h>

int main(){
int  a,b,p=0,fim=1;
char nome[21];
int matriz [5][5]={{0,0,0,1,1},
                   {0,0,0,0,0},
                   {1,0,0,0,1},
                   {1,0,0,1,0},
                   {1,0,1,0,0}};

                printf("Marinheiro, reporte o seu nome:\n");
                scanf(" %s", nome);
                __fpurge(stdin);


    while(fim == 1){
                printf("\nInforme a coordenada de tiro da linha (0 a 4):\n");
                scanf(" %d", &a);
                __fpurge(stdin);
                printf("\nInforme a coordenada de tiro da coluna (0 a 4):\n");
                scanf(" %d", &b);
                __fpurge(stdin);


                     if (matriz[a][b]==1){
                         printf("\nNavio inimigo atingido. voce ganhou um ponto\n");
                        p=p+1;
                     }
                     else{
                         printf("\nTiro morto. Atingiu agua\n");
            
                     }
                     printf("\n %s voce fez %d pontos\n",nome,p);
                     
                       printf("\nDeseja continuar (1 para sim, 0 para nao) : \n");
                         scanf(" %d", &fim);
                    __fpurge(stdin);
                  
    }
    
    
    


return 0;
}
