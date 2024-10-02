#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){
    double v, d, h, ab;
    while(scanf("%lf", &v) != EOF){
        scanf("%lf", &d);
        ab = PI*pow((d/2),2);
        h = v/ab;
        printf("ALTURA = %.2lf\n", h);
        printf("AREA = %.2lf\n", ab);
    }


    return 0;
}