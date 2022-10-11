

#include <stdio.h>
#include <math.h>

double power(double x, int n) {
                                 /* function for power calculation */
    if (n == 0) {
        return 1.0;
    } else if (x == 0.0) {
        return 0.0;
    } else if (x > 0.0) {
        return exp(n * log(x));
    } else if (n & 1) {
        return -exp(n * log(-x));
    } else {
        return exp(n * log(-x));
    }
}

int main() {
    double total, new_total;
    int interest_rate, year;

    printf(" Amount ? ");
    scanf("%lg%*[^\n]", &total);
    getchar();
    printf(" The interest rate ? ");
    scanf("%d%*[^\n]", &interest_rate);
    getchar();
    printf(" Years ? ");
    scanf("%d%*[^\n]", &year);
    getchar();
    new_total = total * power(1.0 + interest_rate / 100.0, year);
    printf("Amount increased with interest:");
    printf("%10.2f\n", new_total);
    return 0;
}
