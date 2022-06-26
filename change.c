/*change clp to usd - fixed*/

#include <stdio.h>

int main(){
   double peso, dollar;
   printf("Cuantos pesos quieres ?");
   scanf("%lf", &peso);
   dollar = peso / 711.12;
   printf("%lf CLP = %lf USD", peso, dollar);
return 0;
}
