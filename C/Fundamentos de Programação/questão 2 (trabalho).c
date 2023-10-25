/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()

{

   int g15, g16_30, g31_45, g46_60, g60;

   float p15, p60;

   int idade;

   int i;

   g15 = g16_30 = g31_45 = g46_60 = g60 = 0;

   for(i = 0; i < 15; i++){

       printf("Udade %d: ", i+1);

       scanf("%d", &idade);

       if(idade <= 15){

           g15++;

       }

       else if(idade >= 16 && idade <=30){

           g16_30++;

       }

       else if(idade >= 31 && idade <= 45){

           g31_45++;

       }

       else if(idade >= 46 && idade <= 60){

           g46_60++;

       }

       else{

           g60++;

       }

   }

   printf("\n Idades:");

   printf("\nAté 15 anos: %d pessoas", g15);

   printf("\nDe 16 a 30 anos: %d pessoas", g16_30);

   printf("\nDe 31 a 45 anos: %d pessoas", g31_45);

   printf("\nDe 46 a 60 anos: %d pessoas", g46_60);

   printf("\nAcima de 60 anos: %d pessoas", g60);

   printf("\n\nPorcentagem de menores de 15 anos: %.2f%%", 100 * g15 / 15.);

   printf("\nPorcentagem de maiores de 60 anos: %.2f%%\n", 100 * g60 / 15.);

   return 0;

}