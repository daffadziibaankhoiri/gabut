#include <stdio.h>

char penilaian(int nilai){
    return(nilai >= 80) ? 'A' :
    (nilai >= 70) ? 'B' :
    (nilai >= 60) ? 'C' :
    (nilai >= 50) ? 'D' : 'E';
}

int main(){
    int nilai;
    char grade;
    printf("Masukkan nilai : ");
    scanf("%d", &nilai);
    grade = penilaian(nilai);
    printf("\nGrade Nilai : %c\n\n", grade);
    return 0;
}
