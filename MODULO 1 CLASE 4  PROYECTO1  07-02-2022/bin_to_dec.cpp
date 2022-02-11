#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;
using std::string;

int bin_to_dec(string);

int main(){
    system("CLS");
    string bit;
    cout << "Conversor Binario a Decimal" << endl;
    cout << "Digite una cadena de bits: ";
    cin >> bit;
    cout << bit << endl;
    cout <<" = " << bin_to_dec(bit)<< endl;
    system("PAUSE");
}

int bin_to_dec(string bit){
    int dec = 0;
    int str_size = bit.length();
    int pot = bit.length()-1;
    for (int i=0;i<str_size;i++)
    {
        if(bit[i]=='1'){
            dec += pow(2.0,pot);
        }
        pot--;
    }
    return dec;
}