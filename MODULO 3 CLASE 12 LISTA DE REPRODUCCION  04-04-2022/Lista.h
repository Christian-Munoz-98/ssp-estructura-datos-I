#include "Nodo.h"
#include <windows.h>

void EmptyMessage(){
    cout<<"\n La lista se Encuentra Vacia\n\n";
}

class Lista{
public:
    Nodo* head;
    Nodo* tail;
    Nodo* actual;
    int count;

    Lista();
    ~Lista();
    void Agregar(Cancion);
    void Siguiente();
    void Anterior();
    void EliminarActual();
    void EliminarPrimero();
    void EliminarUltimo();
    void ImprimirLista();
    bool IsEmpty();
};

Lista::Lista(){
    head = NULL;
    tail = NULL;
    count = 0;
}

Lista::~Lista(){}

void Lista::Agregar(Cancion c){
    Nodo* nuevo = new Nodo(c);

    if (IsEmpty()){
        head = nuevo;
        tail = nuevo;
        head->siguiente = head;
        head->anterior = tail;
    }
    else{
        tail->siguiente = nuevo;
        nuevo->anterior = tail;
        nuevo->siguiente = head;
        tail = nuevo;
        head->anterior = tail;
    }
    count++;
    if (count==1){
        actual=head;
    }
    
}

void Lista::Siguiente(){
    if (!IsEmpty())
        actual = actual->siguiente;
    else
        EmptyMessage();
}

void Lista::Anterior(){
    if (!IsEmpty())
        actual = actual->anterior;
    else
        EmptyMessage();
}

void Lista::EliminarActual(){
    if(!IsEmpty()){
        if(actual==head)
            EliminarPrimero();
        else if(actual==tail)
            EliminarUltimo();
        else{
            Nodo* eliminar = actual;
            Nodo* anterior = actual->anterior;
            actual = actual->siguiente;
            anterior->siguiente = eliminar->siguiente;
            eliminar->siguiente->anterior = anterior;
            delete  eliminar;
            count--;
        }
    }
    else{
        EmptyMessage();
    }
}

void Lista::EliminarPrimero(){
    if (!IsEmpty()){

        if (actual==head){
            actual = actual->siguiente;
        }
        
        Nodo* aux = head;
		head = head->siguiente;
		head->anterior = tail;
		tail->siguiente = head;
        delete aux;
        count--;
    }
    else{
        EmptyMessage();
    }
}

void Lista::EliminarUltimo(){
    if (!IsEmpty()){
        if (actual==tail){
            actual = actual->siguiente;
        }
        Nodo* aux = tail;
		tail = tail->anterior;
		tail->siguiente = head;
		head->anterior = tail;
        delete aux;
        count--;
    }
    else{
        EmptyMessage();
    }
}

void Lista::ImprimirLista(){
	Nodo* nodo = head;
    int x=45,y=5;
    gotoxy(45,4);cout<<"COLA DE REPRODUCCION";
	if(!IsEmpty()){
		do{
            nodo->Mostrar(x,y);
			nodo = nodo->siguiente;
            y+=4;
		}while(nodo!=head);	
	}
    else{
		EmptyMessage();
	}
}

bool Lista::IsEmpty(){
    return count == 0;
}

