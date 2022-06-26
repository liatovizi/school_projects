#include <stdio.h>

#define EQUALS(X,Y) ( ( ((X) > (Y)) ? ((X) - (Y)) : ((Y) - (X)) ) <= 1e-10 )

int main() {
    double a, b, c;    
    double m;          

    printf("Tell me 3 positive number\n");
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
                                                           
    if (c <= 0 || b <= 0) {
        printf("Not a triangle!\n");                     
    } else if (a >= b + c) {
        printf("Not a triangle!\n");                     
    } else if (EQUALS(a,b) && EQUALS(b,c) && EQUALS(a,c)) {
        printf("Equilateral.\n");               /* 3. alternatíva */
    } else if (EQUALS(a,b) || EQUALS(b,c) || EQUALS(a,c)) {
        if (EQUALS((a * a), (b * b + c * c))) {         /* 4. alternatíva */
            printf("Isolaces triangle rectangle.\n");
        } else {
            printf("Isolaces.\n");
        }
    } else if (EQUALS((a * a), (b * b + c * c))) {
        printf("Triangle rectangle\n");              
    } else {
        printf("Other triangle.\n");                        
    }
                                        
    return 0;
}
