/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Yusuf Kaya
 *
 * Created on 11 Mayıs 2019 Cumartesi, 19:45
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kupa.h"

/*
 * 
 */
int main(int argc) {
    
    char* dosyaAdi="takimlar.txt";
    int i=takimSayisi(dosyaAdi);
    char *takimlar[i];
    takimOku(takimlar,i,dosyaAdi);
    
   karistirDiz(takimlar,i);
  
    


    
     
     
    return 0;
}

