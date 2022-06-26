/**/

#include <stdio.h>
#include <math.h>

#define G 9.80665

int main(){
   double v0, vx, vy, alpha, t, sx, sy;
   printf("initial speed (m/s)? ");
   scanf("%lf", &v0);
   printf("grade? ");
   scanf("%lf", &alpha);
   if (0.0 <= alpha && alpha <= 90 && 0.0 <= v0) {
   vy = v0 * sin(alpha / 90.0 * M_PI / 2.0);
   t  = vy / G;
   sy = G / 2.0 * t * t;
   printf("the highest point: %lf m/n", sy);
   vx = v0 * cos(alpha / 90.0 * M_PI / 2.0);
   sx = vx * 2.0 * t;
   printf("Distance will be: %lf\n", sx);
   } else {
   printf("error");
   }
   

return 0;
}
