/*squarenumbers*/

#include<stdio.h>

int readNotNegNumber(){
 int number;
 printf("tell me a positive number\n");
 
 do {
   scanf("%d", &number);
   if(number < 1){
    printf("Positive number I said\n");
   }
 } while(number < 1);
 
 return number;
}

void printSquareNums(int number){
 
 int i;
 for(i = 1; i*i <= number;i++){
  printf("%d. squarenumber: %d\n", i, i*i);
 }
 
};


int main(){
 int number = readNotNegNumber();
 
 printSquareNums(number);


return 0;
}
