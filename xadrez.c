#include <stdio.h>

int main()
{
    //movimentação rainha
    int quantidadeMovimento = 0;
    printf("Movimentação da rainha\n");
   do{
       //printa a cada movimento
    printf("Rainha para esquerda\n");
    quantidadeMovimento++;
    //valor a se rodar o código
   }while(quantidadeMovimento < 8);
   
   
   //movimento torre
   printf("Movimentação da torre\n");
   quantidadeMovimento = 0;
   while(quantidadeMovimento <=5){
       printf("Direita\n");
       quantidadeMovimento++;
   }
   
   
   //movimentação do bispo
   printf("Movimentação do bispo\n");
   for (int i = 1; i <= 2; i++) {
       printf("Cima Direita\n");
       
   }
    return 0;
}
