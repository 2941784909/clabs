#include <stdio.h>
 int main(vi)
 {
 int fahr, celsius;
 int lower, upper,step;
 lower = 0;
 upper = 100;
 step = 5;
 fahr = lower;
 while (fahr  <= upper){
     celsius = 5* (fahr - 32) / 9;
     print("%d/t%d\n",fahr,celsius);
     celsius = celsius + step;
   }
 }
