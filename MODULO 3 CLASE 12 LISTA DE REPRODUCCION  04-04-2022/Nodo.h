#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void gotoxy(int,int);

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
    void Mostrar(int,int);
};

Nodo::Nodo(Cancion c){
    cancion = c;
    siguiente = NULL;
    anterior = NULL;
}

Nodo::~Nodo(){
    cout<<"Nodo eliminado"<<endl;
}

void Nodo::Mostrar(int x,int y){
    gotoxy(x,y);cout <<"Titulo: " <<cancion.titulo<< endl;
    gotoxy(x,y+1);cout<<"Artista: " <<cancion.artista << endl;
    gotoxy(x,y+2);cout<<"Genero: " <<cancion.genero << endl;
    gotoxy(x,y+3);cout<<"------------------------" <<endl;
}

void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
}