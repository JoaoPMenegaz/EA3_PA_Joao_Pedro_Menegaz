#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void MinMax(int *aux, int primeironumero, int *min, int *max){
    int i;
    *min = *aux;
    *max = *aux;
    for(i = 1; i < primeironumero; i++){
        if(*min > *(aux + i))
            *min = *(aux + i);
        if(*max < *(aux + i))
            *max = *(aux + i);
    }
}

int main(){

    int primeironumero=0;
    printf("Escreva quantos elementos vai ter o seu vetor\n");
    scanf(" %d", &primeironumero);
    int v[primeironumero];
    printf("Escreva os elementos do seu vetor\n");
    
    for(int i = 0; i < primeironumero; i++){
    scanf(" %d", &v[i]);
    }
    
    int min, max;
    MinMax(v, primeironumero, &min, &max);
    
    for (int i=0; i < primeironumero; i++){
        printf("%d,",v[i]);
    }
    printf("\nMax=%d\tMin=%d\n", max, min);

    return 0;
}