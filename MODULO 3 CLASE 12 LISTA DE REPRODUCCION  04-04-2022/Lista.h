#include "Nodo.h"

class Lista{
public:
    Nodo* head;
    Nodo* tail;
    Nodo* actual;
    int count;

    Lista();
    ~Lista();
    void Agregar();
    void Siguiente();
    void Anterior();
    void EliminarActual();
    void EliminarPrimero();
    void EliminarUltimo();
    void EditarCancion();
    //void InvertirLista();
    void ImprimirLista();
};

Lista::Lista(){
    head = NULL;
    tail = NULL;
    count = 0;
}

Lista::~Lista(){}

void Lista::Agregar(){
    Nodo* nuevo = new Nodo();

    if (head==NULL){
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
    actual = actual->siguiente;
}

void Lista::Anterior(){
    actual = actual->anterior;
}

void Lista::EliminarActual(){
    Nodo* anterior = actual->anterior;
    if(head!=NULL){
        anterior->siguiente = actual->siguiente;
		actual->siguiente->anterior = anterior;
        Nodo* aux = actual;
        actual = actual->siguiente;
        delete  aux;
        count--;
    }
    else{
        cout<<"\n La lista se Encuentra Vacia\n\n";
    }
}

void Lista::EliminarPrimero(){
    if (head!=NULL){
        Nodo* aux = head;
		head = head->siguiente;
		head->anterior = tail;
		tail->siguiente = head;
        delete aux;
        count--;
    }
    else{
        cout<< "\n La lista se Encuentra Vacia\n\n";
    }
}

void Lista::EliminarUltimo(){
    if (head!=NULL){
        Nodo* aux = tail;
		tail = tail->anterior;
		tail->siguiente = head;
		head->anterior = tail;
        delete aux;
        count--;
    }
    else{
        cout<< "\n La lista se Encuentra Vacia\n\n";
    }
}

void Lista::EditarCancion(){
	if(head!=NULL)
        actual->Modificar();
    else
		cout << "\n La lista se Encuentra Vacia\n\n";
}

/*void Lista::InvertirLista(){
    if (head!=NULL){
        Nodo* begin = head;
        Nodo* end = tail;
        Cancion* low_song = head->cancion;
        Cancion* high_song = tail->cancion;
        for(int i = count/2;i>=1;i--){
            begin->cancion = high_song;
            end->cancion = low_song;
            begin = begin->siguiente;
            end = end->anterior;
            low_song = begin->cancion;
            high_song = end->cancion;
        }
    }
    else{
        cout<< "\n La lista se Encuentra Vacia\n\n";
    }
}*/

void Lista::ImprimirLista(){
	Nodo* nodo = head;
	if(head!=NULL){
		do{
            nodo->Mostrar();
			nodo = nodo->siguiente;
		}while(nodo!=head);	
	}
    else{
		cout << "\n La lista se Encuentra Vacia\n\n";
	}
}




