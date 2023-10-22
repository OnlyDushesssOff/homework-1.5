#include <stdio.h>
#include <locale.h>
#include <math.h>


 int main(){
   setlocale(LC_ALL, "Russian");

   int L = 100;
   float Pi = 3.14;
   printf("Длина окружности = %d\n", L);
   printf("Площадь круга = %.5lf\n", pow((L/(2*Pi)), 2) * Pi);

    return 0;
 }