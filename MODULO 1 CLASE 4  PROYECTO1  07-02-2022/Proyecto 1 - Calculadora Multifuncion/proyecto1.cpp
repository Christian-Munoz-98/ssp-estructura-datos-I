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

