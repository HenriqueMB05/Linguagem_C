#include <stdio.h>
#include <locale.h>

int primo(int n){
    for (int i = 0; i < 10; i++){
        if (i != n && i > 1 && n % i == 0){
            return 0;
        } 
    }
    return 1;
}

int main(){
    setlocale(LC_ALL, "");
    int n, var;

    printf("Digite um número para verificara se ele é primo ou não: ");
    scanf("%d", &n);

    var = primo(n);
    if(var==1){
        printf("O número: %d é primo!", n);
    }else{
        printf("O número: %d não é primo!", n);
    }

     
}