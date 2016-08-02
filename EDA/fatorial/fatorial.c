#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("\n\n\t\t%d\n\n", calcularFatorial(6));
    return 0;
}

calcularFatorial(int numero) {
    if(numero > 0){
        return numero*calcularFatorial(numero-1);
    }else{
        return 1;
    }
}
