#include <stdio.h>

int main(){

    int nilai;
    char grade1;
    char grade2;


    printf("Masukkan Nilai : ");
    scanf("%d", &nilai);
    
    if(nilai >= 80){
        grade1 = 'A';
    }else if(nilai >= 70){
        grade1 = 'B';
    }else if(nilai >= 60){
        grade1 = 'C';
    }else if(nilai >=50){
        grade1 = 'D';
    }else{
        grade1 = 'E';
    }
      
    int nilai_akhir = nilai / 10;
    switch (nilai_akhir)
    {
    case 10:
        grade2 = 'A';
        break;
    case 9:
         grade2 = 'A';
    break;
    case 8:
         grade2 = 'A';
    break;
    case 7:
         grade2 =  'B';
    break;
    case 6:
         grade2 = 'C';
    break;
    case 5:
        grade2 = 'D';
    break;
    default:
        grade2 = 'E';
        break;
    }
      
    printf("\nGrade Nilai dengan if else : %c",grade1);
    printf("\nGrade Nilai dengan switch case: %c\n",grade2);

    return 0;
}

