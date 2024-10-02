#include <stdio.h>
#include <math.h>

int main(){
    double value, rest;
    scanf("%lf", &value);
    printf("NOTAS:\n");
    rest = fmod(value,100);
    printf("%.0lf nota(s) de R$ 100.00\n", (value-fmod(value,100))/100);
    value = rest;
    rest = fmod(value,50);
    printf("%.0lf nota(s) de R$ 50.00\n", (value-fmod(value,50))/50);
    value = rest;
    rest = fmod(value,20);
    printf("%.0lf nota(s) de R$ 20.00\n", (value-fmod(value,20))/20);
    value = rest;
    rest = fmod(value,10);
    printf("%.0lf nota(s) de R$ 10.00\n", (value-fmod(value,10))/10);
    value = rest;
    rest = fmod(value,5);
    printf("%.0lf nota(s) de R$ 5.00\n", (value-fmod(value,5))/5);
    value = rest;
    rest = fmod(value,2);
    printf("%.0lf nota(s) de R$ 2.00\n", (value-fmod(value,2))/2);


    printf("MOEDAS:\n");
    value = rest;
    rest = fmod(value,1);
    printf("%.0lf moeda(s) de R$ 1.00\n", (value-fmod(value,1))/1);
    value = rest;
    rest = fmod(value,0.50);
    printf("%.0lf moeda(s) de R$ 0.50\n", (value-fmod(value,0.50))/0.50);
    value = rest;
    rest = fmod(value,0.25);
    printf("%.0lf moeda(s) de R$ 0.25\n", (value-fmod(value,0.25))/0.25);
    value = rest;
    rest = fmod(value,0.10);
    printf("%.0lf moeda(s) de R$ 0.10\n", (value-fmod(value,0.10))/0.10);
    value = rest;
    rest = fmod(value,0.05);
    printf("%.0lf moeda(s) de R$ 0.05\n", (value-fmod(value,0.05))/0.05);
    value = rest;
    rest = fmod(value,0.01);
    printf("%.0lf moeda(s) de R$ 0.01\n", (value-fmod(value,0.01))/0.01);
    


// NOTAS:
// 5 nota(s) de R$ 100.00
// 1 nota(s) de R$ 50.00
// 1 nota(s) de R$ 20.00
// 0 nota(s) de R$ 10.00
// 1 nota(s) de R$ 5.00
// 0 nota(s) de R$ 2.00
// MOEDAS:
// 1 moeda(s) de R$ 1.00
// 1 moeda(s) de R$ 0.50
// 0 moeda(s) de R$ 0.25
// 2 moeda(s) de R$ 0.10
// 0 moeda(s) de R$ 0.05
// 3 moeda(s) de R$ 0.01



    return 0;
}