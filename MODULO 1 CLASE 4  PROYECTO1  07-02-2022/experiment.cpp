#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int exp,digito;
    double binario, decimal;
    cout << "Introduce numero: ";
    cin >> binario;
    exp=0;
    decimal=0;
    
    while(((int)(binario/10))!=0)
    {
        cout << "--------------" << endl;
        cout << "Binario = " << (int)binario << endl;
        digito = (int)binario % 10;
        cout << "Digito = " << digito << endl;
        cout << "Exponente = " << exp << endl;
        cout << "Decimal = " << decimal << "+" << digito << "*" << pow(2.0,exp) << endl;
        decimal = decimal + digito * pow(2.0,exp);
        cout << "Decimal = " << decimal << endl;
        exp++;
        cout << "Exponente = " << exp << endl;
        binario=(int)(binario/10);
        cout << "Binario = " << binario << endl;
    }
    decimal=decimal + binario * pow(2.0,exp);
    cout << endl << "Decimal: " << decimal << endl;
    system("pause");
}