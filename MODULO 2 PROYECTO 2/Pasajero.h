#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
}
using namespace std;

class Pasajero{
public:
    string nombre;
    int id;
    int boleto;
    int maletas;
    Pasajero* siguiente;
    
    Pasajero(string,int);
    void setBoleto();
    void setMaletas();
    void mostrarDatos();
};

Pasajero::Pasajero(string nombre, int contador){
    this->nombre = nombre;
    this->id = contador+1;
    setBoleto();
    siguiente = NULL;
}

void Pasajero::setBoleto(){
    boleto = rand() % 100000000000 + 1234567;
}

void Pasajero::setMaletas(){
    maletas = rand() % 5 + 1;
}
 
void Pasajero::mostrarDatos(){
    gotoxy((id-1)*20,0);cout<<"----------"<<endl;
    gotoxy((id-1)*20,1);cout <<"Nombre: "<<nombre<< endl;
    gotoxy((id-1)*20,2);cout <<"Id: "<<id<<endl;
    gotoxy((id-1)*20,3);cout<<"Boleto: "<<boleto<<endl;
    gotoxy((id-1)*20,4);cout<<"----------"<<endl;
}


