#include <stdio.h>

void imprimeHex(int nmr){

    switch (nmr)
    {
    case 0: printf("0"); break;
    case 1: printf("1"); break;
    case 2: printf("2"); break;
    case 3: printf("3"); break;
    case 4: printf("4"); break;
    case 5: printf("5"); break;
    case 6: printf("6"); break;
    case 7: printf("7"); break;
    case 8: printf("8"); break;
    case 9: printf("9"); break;
    case 10: printf("A"); break;
    case 11: printf("B"); break;
    case 12: printf("C"); break;
    case 13: printf("D"); break;
    case 14: printf("E"); break;
    case 15: printf("F"); break;
    }
}    

int main(){
    int n, pont = 0;
    int hex[100];
    scanf("%d", &n);

    if(n < 16 ){
        imprimeHex(n);
    } else {
        while (n>=16)
        {
            hex[pont++] = n%16;
            n = n/16;
        }
        hex[pont] = n;        
    }

    for(int i = pont; i>=0; i--){
        imprimeHex(hex[i]);
    }


    printf("\n");
    
    return 0;
}