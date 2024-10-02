#include <stdio.h>
#include <math.h>

void leMatriz(double matriz[12][12], int tam){
    for(int i = 0; i<tam; i++){
        for(int j = 0; j<tam; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    return;
}


void operacaoMatriz(double matriz[12][12], int tam, char op){
    int cmc = 5, fnl = 6, cont = 0;
    double resultado = 0;
    for(int i = 7; i<tam; i++){
        for(int j = 0; j<tam; j++){
            if(j>=cmc && j<=fnl){
                resultado += matriz[i][j];
                cont++;
            }
        }
        cmc--;
        fnl++;
    }
    if(op == 'S' || op == 's'){
        printf("%.1lf\n", resultado);

    }else if(op == 'M' || op == 'm'){
        printf("%.1lf\n", resultado/cont);

    }
    return;
}



int main(){
    
    int tam = 12;
    double matriz [12][12];
    char op;
    scanf(" %c", &op);
    leMatriz(matriz, tam);
    operacaoMatriz(matriz, tam, op);
    

    return 0;
}