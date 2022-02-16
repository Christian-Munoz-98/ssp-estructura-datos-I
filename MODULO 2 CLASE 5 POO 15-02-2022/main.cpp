#include <iostream>
#include "Triangulo.h"
#include "Cuadrado.h"
#include "Rectangulo.h"

using namespace std;

int main(){
    double base = 0,altura;
    int opc=0;
    Rectangulo r;
    do{
        system("cls");
        cout << "Ingrese la base: ";
        cin >> base;
        cout << "Ingrese la altura: ";
        cin >> altura;      

        r.setBase(base);
        r.setAltura(altura);       
        r.calculaArea();
        cout << "Area: " << r.getArea() << endl;

        cout<<"Continuar 1.Si 2.No"<<endl;
        cin>>opc;
    }while(opc!=2);
    return 0;
}

