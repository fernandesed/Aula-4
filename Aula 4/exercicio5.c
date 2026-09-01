#include<stdio.h>
#include<locale.h>

int main()
{
   setlocale(LC_CTYPE, "");
   char opcao;
   float num_diarias;
   float total_pagar;

   printf("Hospedagem Anália\n");
   printf("[S] Quarto simples\n");
   printf("[D] Quarto duplo\n");
   printf("[T] Quarto triplo\n");
   printf("Digite uma opção:\n");
   scanf(" %c", &opcao);

   printf("Qual a quantidade de diárias: ");
   scanf("%f", &num_diarias);

   if(opcao == 's'  || opcao == 's'){
   printf("Total a pagar R$ %.2f", (num_diarias*300));
   } else if (opcao == 'd' || opcao == 'D'){
    printf("Total a pagar R$ %.2f", (num_diarias*450));
   } else if (opcao == 't' || opcao == 'T'){
   printf("Total a pagar R$ %.2f", (num_diarias*600));
   } else {
   printf("Opção inválida!!!");
   }

   return 0;






}
