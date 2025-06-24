#include <stdio.h>

int main()
{
    
    //movimentação rainha
    int movimentoTotal = 3; //determina quantas vezes será movido
    int movimentoAtual = 0; // mantém o rastreio de quantas vezes rodou
    printf("Movimentação da rainha\n");
   do{
       //printa a cada movimento
        printf("Cima\n");
        movimentoAtual++;
    //valor a se rodar o código
   }while(movimentoAtual < movimentoTotal); 
   
   
   //movimento torre
   printf("Movimentação da torre\n");
   movimentoAtual = 0;
   movimentoTotal = 5;
   while(movimentoAtual <=movimentoTotal){
       printf("Direita\n");
       movimentoAtual++;
   }
   //movimentação do bispo
   movimentoTotal = 2;
   printf("Movimentação do bispo\n");
   for (int i = 1; i <= movimentoTotal; i++) {
       printf("Cima Direita\n");
   }
   
   printf("\n");
   printf("Movimentação do cavalo\n");
   movimentoTotal = 2;
   for(int i = 1; i <= movimentoTotal; i++){
       movimentoAtual = 1;
       while(movimentoAtual <= 2){
           printf("cima ");
           movimentoAtual++;
       }
       printf("direita\n");
   }
    return 0;
}
