#include <stdio.h>

int main(){
    int n, nmr, d=0, t=0, q=0, c=0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &nmr);
        if(nmr%2 == 0)
            d++;
        if(nmr%3 == 0)
            t++;
        if(nmr%4 == 0)
            q++;
        if(nmr%5 == 0)
            c++;
            
    }
    printf("%d Multiplo(s) de 2\n", d);
    printf("%d Multiplo(s) de 3\n", t);
    printf("%d Multiplo(s) de 4\n", q);
    printf("%d Multiplo(s) de 5\n", c);


    return 0;
}