#include <iostream>
#include <cstdlib>
#include "menu_opciones.h"
using namespace std;

int main(){
    system("cls");
    char opc='1';
    
    do{
        system("cls");
        Menu();   
        cout << "Presione (0) si desea salir --------> ";
        cin >>opc;    
    } while (opc!='0');

    cout << "HASTA PRONTO..." << endl;
    system("pause");

    return 0;
}

//validaciones que ingresen numeros o caracteres correctamente
//que no metan ninguna letra que no sea de la A a la F en Hexadecimal
//que no metan ningun numero superior a 7 en el octal
//que no metan ningun numero superior a 1 u otro tipo de caracter en el binario