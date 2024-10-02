#include <stdio.h>

int main(){

    int r1, r2, qtd;
    scanf("%d", &qtd);

    for(int i = 0; i<qtd; i++){
        scanf("%d %d", &r1, &r2);
        printf("%d\n", r1+r2);
    }
}