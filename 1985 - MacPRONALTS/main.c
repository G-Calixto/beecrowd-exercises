#include <stdio.h>





int main(){
    int n, m, qtd;
    double resultado = 0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &m, &qtd);
        switch (m)
        {
        case 1001:
            resultado += qtd*1.50;
            break;

        case 1002:
            resultado += qtd*2.50;
            break;

        case 1003:
            resultado += qtd*3.50;
            break;

        case 1004:
            resultado += qtd*4.50;
            break;

        case 1005:
            resultado += qtd*5.50;
            break;
        }

    }

    printf("%.2lf\n", resultado);



    return 0;
}