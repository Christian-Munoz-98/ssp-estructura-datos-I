#include <iostream>
#include "Triangulo.h"

using namespace std;

int main(){
    double base = 0, altura=0;
    int opc=0;
    Triangulo t;
    do{
        system("cls");
        cout << "Ingrese la Base: ";
        cin >> base;
        cout << "Ingrese Altura: ";
        cin >> altura;
        t.setBase(base);
        t.setAltura(altura);
        t.calculaArea();
        cout << "Area: " << t.getArea() << endl;

        cout<<"Continuar 1.Si 2.No"<<endl;
        cin>>opc;
    }while(opc!=2);
    return 0;
}

