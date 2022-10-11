/* the program asks for two integers, then rearranges them if
necessary, so that the first is the smallest, 
the operation writes the current value to a line*/


#include <stdio.h>

int main(){
 int a, b;
 printf("Enter the bottom and top of the interval: ");
 scanf("%d %d", &a, &b);
 if (a<b){
  while(a <= b) {
  printf("%d\n", a);
  a++;
  }
 }
 else{
  while (a >= b){
  printf("%d\n", a);
  a--;
  }
 }
 

return 0;
}
