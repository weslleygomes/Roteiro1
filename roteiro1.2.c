#include <stdio.h>
#include <math.h>

int main(){
    float sb; //~ Salário Bruto

    printf("Digite o valor do salario bruto: ");
    scanf("%f", &sb);

    if(sb<=420){
        printf("Desconto do INSS: 8%%\n"
               "Salario liquido: R$%.02f", sb-sb*0.08);
    }else if(sb<=1350){
        printf("Desconto do INSS: 9%%\n"
               "Salario liquido: R$%.02f", sb-sb*0.09);
    }else{
        printf("Desconto do INSS: 10%%\n"
               "Salario liquido: R$%.02f", sb-sb*0.1);
    }
    puts("");
    return 0;
}
