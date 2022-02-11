#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <string>
#include <cstdlib>

using std::string;

/*
"1)Suma"
"2)Resta"
"3)Multiplicacion"
"4)Division"
"5)Potencia"
"6)Factorial"
"7)Decimal Binario"
"8)Binario Decimal"
"9)Decimal Octal"
"10)Octal Decimal"
"11)Decimal Hexadecimal"
"12)Hexadecimal Decimal"
*/

void suma(double*,double*);
void resta(double*,double*);
void multiplicacion(double*,double*);
void division(double*,double*);
void potencia(double*,double*);
void factorial(double*);
string dec_to_bin(int*);
void bin_to_dec(string,int*);
string dec_to_hex(int*);

void suma(double* sumado,double* sumando){
	*sumado += *sumando;
}

void resta(double* minuendo,double* sustraendo){
    *minuendo -= *sustraendo;
}

void multiplicacion(double* multiplicando,double* multiplicador){
    *multiplicando *= *multiplicador;
}

void division(double* dividendo,double* divisor){
    *dividendo /= *divisor;
}

void potencia(double* base,double* exponente){
    double aux=1;
    if((*exponente == 0)||(*base==1)){
        *base = 1;
    }
    else if(*exponente==1){
        return;
    }
    else if (*base==0){
        return;
    }

    for(int i=1; i<=*exponente;i++){
        aux *= *base;
    }

    *base = aux;
}

void factorial(double *num){
    if(*num>1){
        for(int i=*num-1;i>0;i--)
            *num=*num*i;
    }        
}

string dec_to_bin(int* val){
    string decode= "01";
    string bin = "";

    while (*val>1)
    {
        bin = decode[*val%2] + bin;
        *val /= 2;
    }
    bin = decode[*val] + bin;
    return bin;
}

void bin_to_dec(string bit, int* dec){
    int str_size = bit.length();
    int pot = bit.length()-1;
    
    for (int i=0;i<str_size;i++)
    {
        if(bit[i]=='1'){
            *dec += pow(2,pot);
        }
        pot--;
    }
}

string dec_to_hex(int* val){
    string decode= "0123456789ABCDEF";
    string hex = "";

    while (*val>15)
    {
        hex = decode[*val%16] + hex;
        *val /= 16;
    }
    hex = decode[*val] + hex;
    return hex;
}