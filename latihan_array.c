#include <stdio.h>

int main(){

    int input;
    
    printf("Masukkan jumlah/isi array : ");
    scanf("%d", &input);
    char hasil[input];
    for(int i=0; i<input; i++){
        printf("Input index ke-%d : ", i+1);
        scanf(" %c", &hasil[i]);
    }

    hasil[input] = '\0';
    printf("Isi array yang telah dimasukkan : \n%s\n", hasil);
    return 0;
}