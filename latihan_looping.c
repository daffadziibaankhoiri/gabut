#include <stdio.h>

int main(){

    int i, masukan, hasil;
    printf("Masukan batas maksimal : ");
    scanf("%d", &masukan);

    for(i=1; i <= masukan; i++){
        printf("%d", i);
        hasil += i;
        if(i < masukan){
            printf(" + ");
        }else {
            printf(" = %d", hasil);
        }

    }

}