#include <stdio.h>
#include <locale.h>

int var(int a){
    if(a%2==0){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    setlocale(LC_ALL, "");
    int num;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    if(var(num)== 1){
        printf("%d � par!", num);
    }else{
        printf("%d � impar!", num);
    }
    
}