//
// Created by Davi Trajano on 22/02/2023.
//
#include "teste_num.h"
bool eh_par(int n1){
    if(n1%2==0){
        return true;
    } else{
        return false;
    }
}
bool eh_impar(int n1){
    if(n1%2!=0){
        return true;
    } else{
        return false;
    }
}
bool eh_primo(int n1){
   int aux = 0, sinal = 0;
   aux=n1/2;
   for(int i = 2; i<= aux; i++){
       if(n1%i ==0){
           sinal = 1;
           return false;
       }
   }
   if (sinal == 0){
       return true;
   }
}
