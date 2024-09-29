#include <stdio.h>

int main(){
    int i, mult=1;
    
    for(i=5;i>0;i--){
        mult *=i;
    }
    printf("fatorial de 5 = %d", mult);

    return 0;
}