#include <stdio.h>

int main(){

    int nilai;
    char grade;

    printf("Masukkan Nilai : ");
    scanf("%d", &nilai);
    
    int nilai_akhir = nilai / 10;
    switch (nilai_akhir)
    {
    case 10:
        grade = 'A';
        break;
    case 9:
         grade = 'A';
    break;
    case 8:
         grade = 'A';
    break;
    case 7:
         grade =  'B';
    break;
    case 6:
         grade = 'C';
    break;
    case 5:
        grade = 'D';
    break;
    default:
        grade = 'E';
        break;
    }
      
    printf("Grade Nilai : %c",grade);

    return 0;
}

