#include <stdio.h>

int main(){
    char numeros[11] = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', '\0'};
    int n = -1;
    scanf(" %s", &numeros);
    for(int i = 0; i<10; i++){
        printf("%c\n", numeros[i]);


    return 0;
}