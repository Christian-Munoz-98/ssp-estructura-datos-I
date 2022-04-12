#include <iostream>
#include <string>
using namespace std;

struct Cancion{
    int id;
    string titulo;
    string artista;
    string genero;
    string ruta;
};

class Nodo{
public:
    Cancion cancion;
    Nodo* siguiente;
    Nodo* anterior;
    Nodo(Cancion);
    ~Nodo();
    void Modificar();
    void Mostrar();
};

Nodo::Nodo(Cancion c){
    cancion = c;
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
    <<"2.-Artista"<<endl
    <<"3.-Genero"<<endl
    <<">>> ";
    cin>>opc;
    switch(opc){
        case 1:
            cout<<"Ingrese nuevo titulo: ";
            cin>>modificacion;
            cancion.titulo = modificacion;
            break;
        case 2:
            cout<<"Ingrese nuevo artista: ";
            cin>>modificacion;
            cancion.artista = modificacion;
            break;
        case 3:
            cout<<"Ingrese nuevo genero: ";
            cin>>modificacion;
            cancion.genero = modificacion;
            break; 
        default:
            cout<<"Opcion invalida...";
            break;
    }
}

void Nodo::Mostrar(){
    cout <<"-------------" <<endl
    <<"Titulo: " <<cancion.titulo<< endl
    <<"Artista: " <<cancion.artista << endl
    <<"Genero: " <<cancion.genero << endl
    <<"Ruta: "<<cancion.ruta<<endl
    <<"-------------" <<endl;
}