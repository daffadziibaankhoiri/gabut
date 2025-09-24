#include <stdio.h>

// int main(){

//     int nilai;
//     char grade;
//     printf("Masukkan nilai : ");
//     scanf("%d", &nilai);

//     if(nilai < 0 || nilai > 100){
//         printf("Rentang nilai hanya 0 - 100\n");
//         return 1;
//     }else{
//         if(nilai >= 80){
//             grade = 'A';
//         }else if(nilai >= 70){
//             grade = 'B';
//         }else if(nilai >= 60){
//             grade = 'C';
//         }else if(nilai >= 50){
//             grade = 'D';
//         }else {
//             grade = 'E';
//         }

//         printf("Grade Nilai : %c\n", grade);
//     }
//     return 0;
// }

char konversi(int nilai){
    return(nilai >= 80) ? 'A' :
    (nilai >= 70) ? 'B' :
    (nilai >= 60) ? 'C' :
    (nilai >= 50) ? 'D' : 'E';
}


char penilaian(int nilai){
    nilai = nilai / 10;
    switch (nilai)
    {
    case 10:
        return 'A';
        break;
    case 9:
        return 'A';
    break;
    case 8:
        return 'A';
    break;
    case 7:
        return 'B';
    break;
    case 6:
        return 'C';
    break;
    case 5:
        return 'D';
    break;
    default:
        return 'E';
        break;
    }
}
int main(){

    int nilai;
    char grade;
    printf("Masukkan nilai : ");
    scanf("%d", &nilai);

    // grade = penilaian(nilai);
    grade = penilaian(nilai);


    printf("\n\nGrade Nilai : %c\n\n", grade);
    return 0;
}

