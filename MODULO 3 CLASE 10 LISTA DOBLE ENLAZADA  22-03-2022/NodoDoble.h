#include <iostream>

using namespace std;

class NodoDoble{
public:
    int num;
    NodoDoble* Anterior;
    NodoDoble* Siguiente;

    NodoDoble();
};

NodoDoble::NodoDoble(){
    cout << "Ingrese un numero >> ";
    cin>>num;
    Anterior = NULL;
    Siguiente = NULL;
}
