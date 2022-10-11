
#include <stdio.h>

int main() {
    double vegjel, szam, osszeg, min, max, atlag;
    int db;                                 /* az összegzett elemek száma */

    printf("Ez a program valós számsorozat minimális,\n");
    printf("maximális elemét és átlagát számolja.\n");
    printf("Az input sorozatot végjel zárja.\n");
    printf("Kérem a végjelet!\n");                       /* inicializálás */
    scanf("%lf", &vegjel);
    printf("Kérem az input számsorozatot!\n");
    printf("? ");
    scanf("%lf", &szam);
    min = max = szam;
    osszeg = 0.0;
    db = 0;

    while (szam != vegjel) {                          /* a ciklus kezdete */
        osszeg += szam;                                      /* összegzés */
        ++db;                                         /* számláló növelés */

        if (szam < min) {                             /* min-max számítás */
            min = szam;
        } else if (szam > max) {
            max = szam;
        }
                                           /* a következő szám beolvasása */
        printf("? ");
        scanf("%lf", &szam);
    }                                                    /* a ciklus vége */

    if (db == 0) {
        printf("Üres számsorozat érkezett.\n");
    } else {
        atlag = osszeg / db;
        printf("Minimum  = %10.3f Maximum = %10.3f\n", min, max);
        printf("Az átlag = %10.3f\n", atlag);
    }
    return 0;
}
