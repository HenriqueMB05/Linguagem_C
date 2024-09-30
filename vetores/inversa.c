 #include <stdio.h>
 #include <locale.h>

 #define tam 6

 int main(){
    setlocale(LC_ALL, "");
    int vet[tam];
    int aux, i;

    printf("Digite 6 números: ");
    for(i=0;i<tam;i++){
        scanf("%d", &vet[i]);
    }

    for(i=0;i<tam;i++){
        if(i <=tam/2-1){
            aux = vet[i];
            vet[i] = vet[tam-i-1];
            vet[tam-i-1]=aux;
        }
        printf("[%d]", vet[i]);
    }



    return 0;
}
