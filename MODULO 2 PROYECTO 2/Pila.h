#include "Cola.h"

class Pila{
private:
    int Contador;
    Pasajero* Top;

public:
    Pila();
    void Push(Pasajero*);
    Pasajero* Pop();
	bool Vacia();
	void Abordar();
};

Pila::Pila(){
    Contador = 0;
    Top = NULL;
}

void Pila::Push(Pasajero* Nuevo){
    Nuevo->siguiente = Top;
    Top = Nuevo;
    gotoxy(40,10);cout<<"Aborda " << Nuevo->nombre<<"..."<<endl;
    Contador++;
    system("cls");
}

Pasajero* Pila::Pop(){
	Pasajero* Sacar = Top;
    Top = Top->siguiente;
    Contador--;
    return Sacar;
}

bool Pila::Vacia(){
    return Contador <= 0;
}

void Pila::Abordar(){
    int x=71;
    int y=11;
    gotoxy(70,5);cout<<"-----ABORDAJE-----"<<endl;
    gotoxy(70,10);cout<<"................."<<endl;
    gotoxy(70,11);cout<<":   :   :   :   :"<<endl;
    gotoxy(70,12);cout<<"................."<<endl;
    gotoxy(70,13);cout<<":   :   :   :   :"<<endl;
    gotoxy(70,14);cout<<"................."<<endl;
    gotoxy(70,15);cout<<":   :   :   :   :"<<endl;
    gotoxy(70,16);cout<<"................."<<endl;
    gotoxy(70,17);cout<<":   :   :   :   :"<<endl;
    gotoxy(70,18);cout<<"................."<<endl;
    gotoxy(70,19);cout<<":   :   :   :   :"<<endl;
    gotoxy(70,20);cout<<"................."<<endl;
    gotoxy(70,21);cout<<":   :   :   :   :"<<endl;
    gotoxy(70,22);cout<<"................."<<endl;
    for(int i=1;i<=Contador;i++){    
        gotoxy(x,y); cout<<" o ";
        x+=4;
        if(i%4==0){
            y+=2;
            x=71;
        }
        Sleep(300);
    }
    system("pause");
}