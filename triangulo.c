// Que tipo de triangulo es?


#include <stdio.h>

int main() {
    double a, b, c;    
    double m;          

    printf("Give me 3 positive number!\n");
    scanf("%lf%lf%lf", &a, &b, &c);

                             
    if (a < b) {                                    
        m = a;
        a = b;
        b = m;
    }
    if (a < c) {                                    
        m = a;
        a = c;
        c = m;
    }
                                                          
    if (b <= 0 || c <= 0) {
        printf("Not triangle!\n");                     
    } else if (a >= b + c) {
        printf("Not triangle!\n");                     
    } else if (a == b && b == c) {
        printf("Equilateral\n");               
    } else if (a == b || b == c || a == c) {
        if (a * a == b * b + c * c) {                   
            printf("Left, right triangle\n");
        } else {
            printf("Isoceles\n");
        }
    } else if (a * a == b * b + c * c) {
        printf("Left, right triangle.\n");              
    } else {
        printf("Other.\n");                        
    }
                                        
    return 0;
}
