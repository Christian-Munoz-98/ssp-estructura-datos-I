#include <iostream>

class Nodo{
private:
    int valor;
    Nodo* siguiente;
public:
    Nodo(int);
    int GetVal();
    Nodo* GetSig();
    void SetSig(Nodo*);
};

Nodo::Nodo(int valor){
    this->valor=valor;
    siguiente = NULL;
}

int Nodo::GetVal(){
    return valor;
}

Nodo* Nodo::GetSig(){
    return siguiente;
}

void Nodo::SetSig(Nodo* siguiente){
    this->siguiente = siguiente;
}