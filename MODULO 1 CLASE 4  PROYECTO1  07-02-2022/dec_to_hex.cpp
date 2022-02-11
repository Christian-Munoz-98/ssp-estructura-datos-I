#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

string dec_to_hex(int);

int main(){
    system("CLS");
    cout << "Conversor Decimal a Hexadecimal" << endl;
    for(int i=0;i<=100;i++){
        cout << i << " = " << dec_to_hex(i)<< endl;
    }
    system("PAUSE");
}

string dec_to_hex(int val){
    string decode= "0123456789ABCDEF";
    string hex = "";

    while (val>15)
    {
        hex = decode[val%16] + hex;
        val /= 16;
    }
    hex = decode[val] + hex;
    return hex;
}