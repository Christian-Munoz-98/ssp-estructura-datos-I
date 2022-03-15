#include "Pila.h"

/*
6.- Abordar taxi (Encolar)
    Se muestra como van ingresando uno por uno a un taxi conforme se encolan
*/

int main(){
    srand(time(NULL));
    Cola* c = new Cola();
    int opcion;
    do{
        system("cls");
        gotoxy(100,10);cout<< "--REGISTRO DE PASAJEROS--" << endl;
        gotoxy(100,11);c->Push();
        gotoxy(100,12);cout<< "Desea Registrar a otro pasajero? [1]si [cualquier tecla]no >> ";
        cin >> opcion;
    } while (opcion==1);
    c->Recepcion();
    c->Asientos();
    c->Equipaje();
    system("cls");
    Pila* p = new Pila();
    int auxcount = c->getCount();
    for(int i=0;i<auxcount;i++){
        p->Push(c->Pop());
    }
    gotoxy(70,23);system("pause");
    system("cls");
    avion();
    auxcount = p->getCount();
    for(int i=0;i<auxcount;i++){
        c->Transfer(p->Pop());
    }
    gotoxy(70,13);system("pause");
};
