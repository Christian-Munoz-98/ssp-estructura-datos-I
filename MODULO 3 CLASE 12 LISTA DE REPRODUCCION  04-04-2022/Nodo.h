#include <iostream>
#include <string>
using namespace std;

struct Cancion{
	string titulo;
	string album;
	string artista;
	string genero;
};

class Nodo{
public:
    Cancion* cancion = new Cancion;
    Nodo* siguiente;
    Nodo* anterior;
    Nodo();
    ~Nodo();
    void Modificar();
    void Mostrar();
};

Nodo::Nodo(){
    string titulo;
    string album;
    string artista;
    string genero;
    cout<<"Ingrese titulo: ";
    cin>>titulo;
    cout<<"Ingrese album: ";
    cin>>album;
    cout<<"Ingrese artista: ";
    cin>>artista;
    cout<<"Ingrese genero: ";
    cin>>genero;
    cancion->titulo = titulo;
    cancion->album = album;
    cancion->artista = artista;
    cancion->genero = genero;
    siguiente = NULL;
    anterior = NULL;
}

Nodo::~Nodo(){
    cout<<"Nodo eliminado"<<endl;
}

void Nodo::Modificar(){
    int opc;
    string modificacion;
    cout<<"Indique que desea modificicar..."<<endl
    <<"1.-Titulo"<<endl
    <<"2.-Album"<<endl
    <<"3.-Artista"<<endl
    <<"4.-Genero"<<endl
    <<">>> ";
    cin>>opc;
    switch(opc){
        case 1:
            cout<<"Ingrese nuevo titulo: ";
            cin>>modificacion;
            cancion->titulo = modificacion;
            break;
        case 2:
            cout<<"Ingrese nuevo album: ";
            cin>>modificacion;
            cancion->album = modificacion;
            break;
        case 3:
            cout<<"Ingrese nuevo artista: ";
            cin>>modificacion;
            cancion->artista = modificacion;
            break;
        case 4:
            cout<<"Ingrese nuevo genero: ";
            cin>>modificacion;
            cancion->genero = modificacion;
            break;        
        default:
            cout<<"Opcion invalida...";
            break;
    }
}

void Nodo::Mostrar(){
    cout <<"-------------" <<endl
    <<"Titulo: " <<cancion->titulo<< endl
    <<"Album: " <<cancion->album<< endl
    <<"Artista: " <<cancion->artista << endl
    <<"Genero: " <<cancion->genero << endl
    <<"-------------" <<endl;
}