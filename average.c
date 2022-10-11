#include <stdio.h>

int main(){
 double sum = 0;
 int count = -1;
 
 double number;
 printf("Tell me a few numbers, the last one should be 0\n");
 do{
  scanf("%lf", &number);
  sum += number;
  count++;
 }while(number > 0.00000005 || number < 0.00000005 );
 
 if (count != 0){
  printf("Avg is: %lf\n", sum/count);
 }
 
return 0;
}
