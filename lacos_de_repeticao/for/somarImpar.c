#include <stdio.h>


int main(){
    int i, soma=0;

    for(i=0;i<16;i++){
        if(i%2!=0){
            soma+=i;
        }
    }
    printf("\nO resultado da soma= %d", soma);
}