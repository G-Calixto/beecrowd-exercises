#include <stdio.h>

int main(){
    int regua, tomadas = 0;
    for(int i = 0; i<4; i++){
        scanf("%d", &regua);
        tomadas += regua -1;
        if(i == 3)
            tomadas++;
    }

    printf("%d\n", tomadas);
    



    return 0;
}