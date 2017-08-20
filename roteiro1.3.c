#include <stdio.h>
#include <math.h>
int maior(int tam, int *n){
    int i, maior=0;
    for(i=0; i<tam; i++){
        if(n[i]==0)
            break;
        if(n[i]>maior)
            maior = n[i];
    }
    return maior;
}
int main(){
    int n[100], i;

    while(1){
        for(i=0; i<100; i++){
            scanf("%d", &n[i]);
            if(n[i]==0)
                break;
        }
        break;
    }
    printf("%d" ,maior(100,n));
    puts("");
    return 0;
}
