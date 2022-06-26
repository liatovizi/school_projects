#include <stdio.h>

int main() {
    int o1, p1;                         /* first time */
    int o2, p2;                       /*second time  */
    int o, p;                             /* time spent */
    int k;                        /* minutes */
    
    printf("Give me the first time (min)\n");
    scanf("%d %d", &o1, &p1);
    printf("Give me the second time (min)\n");
    scanf("%d %d", &o2, &p2);
    
    k = 60 * o2 + p2 - (60 * o1 + p1);  
    o = k / 60;
    p = k % 60;
    
    printf("The time spent: %d hour %d minutes.\n", o, p);
    return 0;
}
