

#include <stdio.h>

int main() {
    int month, day;
    int ok;                                 /* Boolean */

    printf("Give me a date (month, day) !\n");
    scanf("%d%d", &month, &day);

    switch (month) {
    case 2:
        ok = (1 <= day && day <= 28);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        ok = (1 <= day && day <= 30);
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        ok = (1 <= day && day <= 31);
        break;
    default:
        ok = 0;
        break;
    } /* switch */
                                                          
    printf(ok ?
    	"The date is correct\n":
    	"The date is not correct\n");
    return 0;
}
