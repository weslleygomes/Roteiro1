
#include <stdio.h>
#include <math.h>

int main(){
    int idade;
    float preco;

    printf("Digite a idade e o preco: ");
    scanf("%d", &idade);
    scanf("%f", &preco);

    if(idade>18){
        printf("Desconto: 20%%\n"
               "Preco final: R$%.02f", preco-preco*0.2);
    }else{
        printf("Desconto: 10%%\n"
               "Preco final: R$%.02f", preco-preco*0.1);
    }
    puts("");
    return 0;
}
