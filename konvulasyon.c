#include<stdio.h>
int main(){
int anaMatrisrow,anaMatriscolumn,filtreMatrisboyut;
// MxN'lik matris icin M ve N degerleri alma
printf("MxN'lik bir matris icin M degerini giriniz: ");
scanf("%d",&anaMatrisrow);
printf("MxN'lik bir matris icin N degerini giriniz: ");
scanf("%d",&anaMatriscolumn);
int matris[anaMatrisrow][anaMatriscolumn];

//Matrisin her [row][column] elemani icin deger alma
for(int row=0;row<anaMatrisrow;row++){
    for(int column=0;column<anaMatriscolumn;column++){
        printf("matris[%d][%d] icin deger giriniz: ",row,column);
        scanf("%d",&matris[row][column]);
    }
}
//Alinan her degeri yazdirir
printf("\nMatrisiniz:\n");
for(int row=0;row<anaMatrisrow;row++){
    for(int column=0;column<anaMatriscolumn;column++){
        printf("%d\t",matris[row][column]);
    }
    printf("\n");
}
printf("\n");

//Konvulasyon Matrisi icin K degeri alma
printf("KxK'lik konvulasyon matrisi icin K degerini giriniz: ");
scanf("%d",&filtreMatrisboyut);
int filtreMatris[filtreMatrisboyut][filtreMatrisboyut];

// Filtre Matrisinin her [row][column] elemani icin deger alma
for(int row=0;row<filtreMatrisboyut;row++){
    for(int column=0;column<filtreMatrisboyut;column++){
        printf("matris[%d][%d] icin deger giriniz: ",row,column);
        scanf("%d",&filtreMatris[row][column]);
    }
}
//Alinan her degeri yazdirir
printf("\nFiltre Matrisiniz:\n");
for(int row=0;row<filtreMatrisboyut;row++){
    for(int column=0;column<filtreMatrisboyut;column++){
        printf("%d\t",filtreMatris[row][column]);
    }
    printf("\n");
}
//Filtre Matrisi Toplami
int filtreToplam=0;
for(int v=0;v<filtreMatrisboyut;v++){
    for(int c=0;c<filtreMatrisboyut;c++){
filtreToplam+=filtreMatris[v][c];
    }
}

//Sonuc Matrisinin boyutunu olusturur 
int sonucMatrisRow=anaMatrisrow-filtreMatrisboyut+1;
int sonucMatrisCol=anaMatriscolumn-filtreMatrisboyut+1;
int sonucMatris[sonucMatrisRow][sonucMatrisCol];

//Matriste kaydirma islemi ile gerekli islemler yapilir
int toplam=0;

for(int i=0;i<sonucMatrisRow;i++){
    for(int g=0;g<sonucMatrisCol;g++){
        for(int j=0;j<filtreMatrisboyut;j++){
            for(int t=0;t<filtreMatrisboyut;t++){
                toplam+=matris[i+j][g+t]*filtreMatris[j][t];
            }
        }
        sonucMatris[i][g]=toplam/filtreToplam;
        toplam=0;
    }

}
//Sonuc matrisini yazdirir
printf("\n\nSonuc Matrisiniz:\n");
for(int o=0;o<sonucMatrisRow;o++){
    for(int w=0;w<sonucMatrisCol;w++){
        printf("%d\t",sonucMatris[o][w]);
    }
    printf("\n");
}

}