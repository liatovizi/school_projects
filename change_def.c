#include <stdio.h>

#define USD 711.11

double change(double peso, double exchangerate) {
	return peso / exchangerate;
}

int main(){
	double amount ;
	printf("Cuantos pesos quieres cambiar?");
	scanf("%lf", &amount);
	printf("%lf CLP = %lf USD", amount, change(amount, USD));
return 0;
}
