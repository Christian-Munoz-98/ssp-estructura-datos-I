#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

void hex_to_dec(string,int*);
string mayusculas(string);

void hex_to_dec_input(){
    string hex;
    int dec=0;
    int *decptr = &dec;
    cout << "Ingrese una cadena hexadecimal: ";
    cin >> hex;
    hex = mayusculas(hex);
    hex_to_dec(hex,decptr);
    cout << hex << " = " << dec << endl;
}

void hex_to_dec(string hex, int* dec){
    string decode = "0123456789ABCDEF";
    int str_size = hex.length();
    int exp=0,val;

    for(int i=str_size-1; i>=0; i--){
        val = 0;
        for(int j=0; j<16;j++){
            if(hex[i]==decode[j]){
                val=j;
                break;
            }
        }
        *dec += val * pow(16,exp);
        exp++;
    }
}


string mayusculas(string s)
{
    transform(s.begin(), s.end(), s.begin(),[](unsigned char c){ return toupper(c); });
    return s;
}