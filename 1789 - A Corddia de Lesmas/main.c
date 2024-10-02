#include <stdio.h>

int main(){
    int lesmas, verif, vel;
    while(scanf("%d", &lesmas) != EOF){
        verif = 0;
        for(int i = 0; i<lesmas; i++){
            scanf("%d", &vel);
            if(vel > verif)
                verif = vel;
        }
        if(verif < 10)
            printf("1\n");
        else if(verif >= 10 && verif < 20)
            printf("2\n");
        else
            printf("3\n");
    }



    return 0;
}