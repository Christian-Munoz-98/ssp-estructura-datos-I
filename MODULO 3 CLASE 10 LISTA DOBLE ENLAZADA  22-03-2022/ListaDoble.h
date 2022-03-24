#include "NodoDoble.h"

class ListaDoble{
public:
    int contador;
    NodoDoble* Cabecera;
    NodoDoble* Cola;
    
    ListaDoble();

    void InsertarInicio();
    void InsertarFinal();
    void InsertarMedio(int);

    void RemoverInicio();
    void RemoverFinal();
    bool RemoverMedio(int);
    void VaciarLista();

    int Buscar(int);
    int BuscarIndice(int);
    int Primero();
    int Ultimo();

    int Tamanho();
    void MostrarLista();
    void MostrarReversa();

    void AscSort();
    void DescSort();
};

ListaDoble::ListaDoble(){
    contador = 0;
    Cabecera = NULL;
    Cola = NULL;
}

void ListaDoble::InsertarInicio(){
    NodoDoble* nuevoNodo = new NodoDoble();

    nuevoNodo->Siguiente = Cabecera;

    if(Cabecera != NULL)
        Cabecera->Anterior = nuevoNodo;

    Cabecera = nuevoNodo;

    if(contador == 0)
        Cola = Cabecera;

    contador++;
}

void ListaDoble::InsertarFinal(){
    if(contador == 0){
        InsertarInicio();
    }
    else{
        NodoDoble* nuevoNodo = new NodoDoble();
        Cola->Siguiente = nuevoNodo;
        nuevoNodo->Anterior = Cola;
        Cola = nuevoNodo;
        contador++;
    }
}

void ListaDoble::InsertarMedio(int indice){
    if(indice < 0 || indice > contador){
        cout<<"Indice fuera de rango"<<endl;
        system("pause");
    }
    else if(indice == 0)
        InsertarInicio();
    else if(indice == contador)
        InsertarFinal();
    else{
        NodoDoble* nodoAnterior = Cabecera;

        for(int i = 0; i < indice-1; i++){
            nodoAnterior = nodoAnterior->Siguiente;
        }

        NodoDoble* nodoSiguiente = nodoAnterior->Siguiente;

        NodoDoble* nuevoNodo = new NodoDoble();

        nuevoNodo->Siguiente = nodoSiguiente;
        nuevoNodo->Anterior = nodoAnterior;
        nodoAnterior->Siguiente = nuevoNodo;
        nodoSiguiente->Anterior = nuevoNodo;

        contador++;
    }
}

void ListaDoble::RemoverInicio(){
    if(contador == 0)
        cout<<"Lista vacia..."<<endl;
    else{
        NodoDoble* nodo = Cabecera;

        Cabecera = Cabecera->Siguiente;

        delete nodo;

        if(Cabecera != NULL)
            Cabecera->Anterior = NULL;

        contador--;
    }
}

void ListaDoble::RemoverFinal(){
    if(contador == 0)
        cout<<"Lista Vacia..."<<endl;
    if(contador == 1)
        RemoverInicio();
    else{
        NodoDoble* nodo = Cola;

        Cola = Cola->Anterior;

        Cola->Siguiente = NULL;

        delete nodo;

        contador--;
    }
}

bool ListaDoble::RemoverMedio(int indice){
    if(contador == 0)
        return false;

    if(indice < 0 || indice >= contador)
        return false;

    if(indice == 0){
        RemoverInicio();
        return true;
    }
    else if(indice == contador - 1){
        RemoverFinal();
        return true;
    }
    
    NodoDoble* nodoAnterior = Cabecera;

    for(int i = 0; i < indice-1; i++){
        nodoAnterior = nodoAnterior->Siguiente;
    }

    NodoDoble* nodo = nodoAnterior->Siguiente;

    NodoDoble* nodoSiguiente = nodo->Siguiente;

    nodoAnterior->Siguiente = nodoSiguiente;
    nodoSiguiente->Anterior = nodoAnterior;

    delete nodo;

    contador--;
    return true;
}

void ListaDoble::VaciarLista(){
    int aux = contador;

    for(int i=1;i<=aux;i++){
        RemoverInicio();
    }

    cout << "Lista vaciada con exito" << endl;
}

int ListaDoble::Buscar(int indice){
    if(indice < 0 || indice > contador)
        return -1;

    NodoDoble* nodo = Cabecera;

    for(int i=0;i < indice;i++){
        nodo = nodo->Siguiente;
    }

    return nodo->num;
}

int ListaDoble::BuscarIndice(int num){
    if(contador == 0)
        return -1;

    int indice = 0;

    NodoDoble* nodo = Cabecera;

    while(nodo->num != num)
    {
        indice++;
        nodo = nodo->Siguiente;

        if(nodo == NULL){
            return -1;
        }
    }

    return indice;
}

int ListaDoble::Primero(){
    return Cabecera->num;
}

int ListaDoble::Ultimo(){
    return Cola->num;
}

int ListaDoble::Tamanho(){
    return contador;
}

void ListaDoble::MostrarLista(){
    NodoDoble* nodo = Cabecera;

    while(nodo != NULL){
        cout<<nodo->num<<" -> ";
        nodo = nodo->Siguiente;
    }

    cout <<"Fin" << endl;
}

void ListaDoble::MostrarReversa(){
    NodoDoble* nodo = Cola;

    while(nodo != NULL){
        cout<<nodo->num<<" -> ";
        nodo = nodo->Anterior;
    }

    cout <<"Fin" << endl;
}

void ListaDoble::AscSort(){
    NodoDoble* start = Cabecera;
	int swapped;
	NodoDoble* ptr1;
	NodoDoble* lptr = NULL;

	if (start == NULL)
		return;

	do{
		swapped = 0;
		ptr1 = start;

		while (ptr1->Siguiente != lptr){
			if (ptr1->num > ptr1->Siguiente->num){
                int temp = ptr1->num;
                ptr1->num = ptr1->Siguiente->num;
                ptr1->Siguiente->num = temp;
				swapped = 1;
			}
			ptr1 = ptr1->Siguiente;
		}
		lptr = ptr1;
	}
	while (swapped);
}
void ListaDoble::DescSort(){
    NodoDoble* start = Cabecera;
	int swapped;
	NodoDoble* ptr1;
	NodoDoble* lptr = NULL;

	if (start == NULL)
		return;

	do{
		swapped = 0;
		ptr1 = start;

		while (ptr1->Siguiente != lptr){
			if (ptr1->num < ptr1->Siguiente->num){
                int temp = ptr1->num;
                ptr1->num = ptr1->Siguiente->num;
                ptr1->Siguiente->num = temp;
				swapped = 1;
			}
			ptr1 = ptr1->Siguiente;
		}
		lptr = ptr1;
	}
	while (swapped);
}