
#include <stdio.h>

typedef struct {
    int year;
    int month;
    int day;
} date_t;

int main() {
    date_t d;
    int dof;

    scanf("%d-%d-%d", &d.year, &d.month, &d.day);
    dof = d.day;
    switch (d.month) {
        case 12: dof += 30;
        case 11: dof += 31;
        case 10: dof += 30;
        case  9: dof += 31;
        case  8: dof += 31;
        case  7: dof += 30;
        case  6: dof += 31;
        case  5: dof += 30;
        case  4: dof += 31;
        case  3: dof += (d.year%4)?28:((d.year%100)?29:((d.year%400)?28:29));
        case  2: dof += 31;
        case  1: break;
        default: return 1;
    }
    printf("%d-%d-%d is the year's %d. day\n", d.year, d.month, d.day, dof);
    return 0;
}
