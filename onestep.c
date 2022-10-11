 
 #include<stdio.h>

 int main(){
 float fahr, celsius;
 int first, last, step;
 first = 0;
 last = 300;
 step = 20;
 printf("%3s %6s\n", "Fahr", "Celsius"); 
 fahr = first;
 while(fahr<=last){
 	celsius = (5.0/9.0) * (fahr - 32.0);
 	printf("%3.0f %6.1f\n",fahr, celsius);
 	fahr = fahr + step;
 }
 
 }
