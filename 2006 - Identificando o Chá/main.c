#include <stdio.h>

int main(){
    
    int tipoCha, competidor, ganhadores = 0;
    scanf("%d", &tipoCha);
    for(int i = 0; i<5; i++){
        scanf("%d", &competidor);
        if(competidor == tipoCha)
            ganhadores++;
    }

    printf("%d\n", ganhadores);


    return 0;
}