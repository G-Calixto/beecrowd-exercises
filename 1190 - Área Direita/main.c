#include <stdio.h>


void leMatriz( int tam, double matriz[12][12]){
    for(int i = 0; i<tam; i++){
        for(int j = 0; j<tam; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
}


void operaMatriz(double matriz[12][12], char op, int tam){
    int controle = 11, contador = 0;
    double resultado = 0;
    for(int i = 1; i<tam-1; i++){
        for(int j = 6; j<tam; j++){
            if(j>=controle){
                resultado += matriz[i][j];
                contador++;
            }
        }
        if (i>5)
            controle--;
        else if (i<5)
            controle++;
                
    }
    if(op == 'S' || op == 's'){
        printf("%.1lf\n", resultado);
    } else {
        printf("%.1lf\n", resultado/contador);
    }
}


int main(){

    int tam = 12;
    double matriz[12][12];
    char op;
    scanf(" %c", &op);

    FILE *arquivo;
    arquivo = fopen("matriz.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }
    
    leMatriz(tam, matriz);
    fclose(arquivo);
    operaMatriz(matriz, op, tam);





    return 0;
}