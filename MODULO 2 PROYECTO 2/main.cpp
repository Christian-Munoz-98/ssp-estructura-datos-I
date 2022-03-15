#include "Pila.h"

/*
4.- Abordar Avión (Apilar)
    *Se muestra la lista de pasajeros conforme vayan abordando
    *se muestra animacion de avion

5.- Bajar de Avión (Desapilar)
    *se muestra lista de pasajeros como van bajando
    *Animacion de pasajeros bajando

6.- Abordar taxi (Encolar)
    Se muestra como van ingresando uno por uno a un taxi conforme se encolan
*/

int main(){
    srand(time(NULL));
    Cola* c = new Cola();
    int opcion;
    do{
        system("cls");
        cout<< "--REGISTRO DE PASAJEROS--" << endl;
        c->Push();
        cout<< "Desea Registrar a otro pasajero? [1]si [otro]no >> ";
        cin >> opcion;
    } while (opcion==1);
    c->Recepcion();
    c->Asientos();
    c->Equipaje();
    Pila* p = new Pila();
    int auxcount = c->getCount();
    for(int i=0;i<auxcount;i++){
        p->Push(c->Pop());
    }
    p->Abordar();
};