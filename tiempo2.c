#include <stdio.h>

int tiempo_pasado(int hora1, int minuto1, int hora2, int minuto2) {
	return 60 * hora2 + minuto2 - (60 * hora1 + minuto1);
}

int main() {
    int o1, p1;                         /* first time */
    int o2, p2;                       /*second time  */
    int o, p;                             /* time spent */
    
    
    printf("Give me the first time (min)\n");
    scanf("%d %d", &o1, &p1);
    printf("Give me the second time (min)\n");
    scanf("%d %d", &o2, &p2);
    
    o = tiempo_pasado(o1, p1, o2, p2)/60;  
    p = tiempo_pasado(o1, p1, o2, p2) % 60;
    
    printf("The time spent: %d hour %d minutes.\n", o, p);
    return 0;
}
