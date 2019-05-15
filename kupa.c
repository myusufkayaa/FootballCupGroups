#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kupa.h"

int takimSayisi(char* dosyaAdi) {
    FILE* dosya;
    char ch;

    int takimSayisi = 1;
    if ((dosya = fopen(dosyaAdi, "r")) == NULL) {
        printf("Dosya açma hatası!");
        exit(1);
    }
    while (feof(dosya) == 0) {
        if (getc(dosya) == '\n') {
            takimSayisi++;
        }
    }
    fclose(dosya);
    return takimSayisi;

}

void takimOku(char** takimlar, int takimSayisi, char* dosyaAdi) {

    if (takimlar[0] == NULL) {
        FILE* dosya;
        if ((dosya = fopen(dosyaAdi, "r")) == NULL) {
            printf("Dosya açma hatası!");
            exit(1);
        }
        char satir[25];
        for (int i = 0; i < takimSayisi; i++) {
            fgets(satir, 25, dosya);
            takimlar[i] = (char*) malloc(strlen(satir) * sizeof (char));
            strcpy(takimlar[i], satir);
        }

        fclose(dosya);
    } else printf("DİZİ ZATEN DOLU");
}

char*** karistirDiz(char** takimlar, int takimSayisi) {
    int k;
    int z = 0;
    char *gruplar[takimSayisi/4][4];
    
    for (k = 0; k < takimSayisi / 4; k++) {
        int j;
       
        for (j = 0; j < 4; j++) {
            gruplar[k][j] =(char*) malloc(strlen(takimlar[z]) * sizeof (char));
            gruplar[k][j]=takimlar[z];
            z++;
        }
    }
    int i;
    for (i = 0; i < takimSayisi/4; i++) {
        int j;
        for (j = 0; j < 4; j++) {
            printf("%s",gruplar[i][j]);

        }
        printf("//////// \n");

    }

    return gruplar;
}



