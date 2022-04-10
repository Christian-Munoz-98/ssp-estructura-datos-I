#include <iostream>
#include <string>
using namespace std;

/*struct Cancion{
	string titulo;
	string album;
	string artista;
	string genero;
};*/

class Nodo{
public:
	string titulo;
	string album;
	string artista;
	string genero;
    Nodo* siguiente;
    Nodo* anterior;
    Nodo();
    ~Nodo();
    void Modificar();
    void Mostrar();
};

Nodo::Nodo(){
    cout<<"Ingrese titulo: ";
    cin>>titulo;
    cout<<"Ingrese album: ";
    cin>>album;
    cout<<"Ingrese artista: ";
    cin>>artista;
    cout<<"Ingrese genero: ";
    cin>>genero;
    siguiente = NULL;
    anterior = NULL;
}

Nodo::~Nodo(){
    cout<<"Nodo eliminado"<<endl;
}

void Nodo::Modificar(){
    int opc;
    cout<<"Modificicar..."<<endl
    <<"1.-Titulo"<<endl
    <<"2.-Album"<<endl
    <<"3.-Artista"<<endl
    <<"4.-Genero"<<endl;
    cin>>opc;
    switch(opc){
        case 1:
            cout<<"Ingrese nuevo titulo: ";
            cin>>titulo;
            break;
        case 2:
            cout<<"Ingrese nuevo album: ";
            cin>>album;
            break;
        case 3:
            cout<<"Ingrese nuevo artista: ";
            cin>>artista;
            break;
        case 4:
            cout<<"Ingrese nuevo genero: ";
            cin>>genero;
            break;        
        default:
            cout<<"Opcion invalida...";
            break;
    }
}

void Nodo::Mostrar(){
    cout <<"-------------" <<endl
    <<"Titulo: " <<this->titulo<< endl
    <<"Album: " <<this->album << endl
    <<"Artista: " <<this->artista << endl
    <<"Genero: " <<this->genero << endl
    <<"-------------" <<endl;
}