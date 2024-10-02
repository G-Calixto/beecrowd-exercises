#include <stdio.h>

//life is not a problem to be solved


int main(){
    char phrases[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        printf("%c", phrases[i]);
    }

    printf("\n");

    return 0;
}
