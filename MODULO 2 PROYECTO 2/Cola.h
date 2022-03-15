#include "Pasajero.h"

class Cola{
private:
    int contador;
    Pasajero* frente;
    Pasajero* atras;

public:
    Cola();
    void Push();
    void Transfer(Pasajero*);
    Pasajero* Pop();
    int getCount();
    void Recepcion();
    void Asientos();
    void Equipaje();
};

Cola::Cola(){
    contador = 0;
    frente = NULL;
    atras = NULL;
}

void Cola::Push(){
    string nombre;

	cout<<"Ingrese el nombre del pasajero >> ";
   	cin>>nombre;
    
    Pasajero* nuevo = new Pasajero(nombre,contador);
    if(contador== 0){
        nuevo->siguiente=NULL;
        frente = nuevo;
        atras = frente;
    }
    else{
        atras->siguiente=nuevo;
        atras = nuevo;
    }
    contador++;
}

void Cola::Transfer(Pasajero* Baja){
    if(contador== 0){
        Baja->siguiente=NULL;
        frente = Baja;
        atras = frente;
    }
    else{
        atras->siguiente=Baja;
        atras = Baja;
    }
    contador++;
}

Pasajero* Cola::Pop(){
    Pasajero* sacar= frente;
    frente = frente->siguiente;
    contador--;
    return sacar;
}

int Cola::getCount(){
    return contador;
}

void Cola::Recepcion(){
    Pasajero* inicio=frente;
	system("cls");
    int tope=150;
    gotoxy(155,8);cout<<"|RECEPCION|"<<endl;
    gotoxy(155,9);cout<<"     O     "<<endl;
    gotoxy(155,10);cout<<"    /|\\    "<<endl;
    gotoxy(155,11);cout<<"-----------"<<endl;
    gotoxy(155,12);cout<<"||  / \\  ||"<<endl;
    for(int i=0;i<contador;i++){
	    int ban=0;
	    for(int j=0;j<tope;j++){
            gotoxy(j,9);cout<< "  " << inicio->id;
	        gotoxy(j,10);cout<< "  o";
		    gotoxy(j,11); cout<< " /|\\";
		    if(ban==0){
				gotoxy(j,12); cout<< " / ";
			    ban=1;
		    }
            else{
			    gotoxy(j,12); cout<< "   \\";
			    ban=0;
		    }
	        Sleep(30);
	    }
        gotoxy(tope,12);cout<< "/ \\";
        inicio->mostrarDatos();
        inicio = inicio->siguiente;
        tope-=5;            
    }
    Sleep(1000);
    tope=150;
    for(int i=0;i<contador;i++){
        gotoxy(tope,9);cout<< "   ";
	    gotoxy(tope,10);cout<< "   ";
	    gotoxy(tope,11);cout<< "    ";
        gotoxy(tope,12);cout<< "   ";
        gotoxy(i*20,0);cout<<"           "<<endl;
        gotoxy(i*20,1);cout <<"                    "<< endl;
        gotoxy(i*20,2);cout <<"      "<<endl;
        gotoxy(i*20,3);cout<<"                 "<<endl;
        gotoxy(i*20,4);cout<<"           "<<endl;
        Sleep(1000);  
        tope-=5;               
    }
}

void Cola::Asientos(){
    Pasajero* inicio=frente;
    int x= 78;
    int y= 8;
    system("cls");
    gotoxy(70,5);cout<<"-----------------------ASIENTOS-------------------------"<<endl;
    gotoxy(70,6);cout<<"| Fila | Asiento 1 | Asiento 2 | Asiento 3 | Asiento 4 |"<<endl;
    gotoxy(70,7);cout<<"|------|-----------|-----------|-----------|-----------|"<<endl;
    gotoxy(70,8);cout<<"| A    |           |           |           |           |"<<endl;
    gotoxy(70,9);cout<<"| B    |           |           |           |           |"<<endl;
    gotoxy(70,10);cout<<"| C    |           |           |           |           |"<<endl;
    gotoxy(70,11);cout<<"| D    |           |           |           |           |"<<endl;
    gotoxy(70,12);cout<<"| E    |           |           |           |           |"<<endl;
    gotoxy(70,13);cout<<"| F    |           |           |           |           |"<<endl;
    for(int i=0;i<contador;i++){    
        gotoxy(x,y); cout<<inicio->nombre;
        x+=12;
        if (inicio->id%4==0){
            y+=1;
            x=78;
        }
        inicio=inicio->siguiente;
    }
    gotoxy(70,15);system("pause");
}

void Cola::Equipaje(){
    Pasajero* inicio=frente;
	system("cls");
    int tope=150;
    gotoxy(155,8);cout<<"|EQUIPAJE|"<<endl;
    gotoxy(155,9);cout<<"     O     "<<endl;
    gotoxy(155,10);cout<<"    /|\\    "<<endl;
    gotoxy(155,11);cout<<"-----------"<<endl;
    gotoxy(155,12);cout<<"||  / \\  ||"<<endl;
    for(int i=contador-1;i>=0;i--){
        inicio->setMaletas();
	    int ban=0;
	    for(int j=0;j<tope;j++){
	        gotoxy(j,10);cout<< "  o";
		    gotoxy(j,11); cout<< " /|\\";
		    if(ban==0){
				gotoxy(j,12); cout<< " / ";
			    ban=1;
		    }
            else{
			    gotoxy(j,12); cout<< "   \\";
			    ban=0;
		    }
	        Sleep(30);
	    }
        gotoxy(tope,12); cout<< "/ \\";
        inicio->mostrarDatos();
        gotoxy((inicio->id-1)*20,5);cout<<"Maletas: " << inicio->maletas <<endl;
        gotoxy((inicio->id-1)*20,6);cout<<"----------"<<endl;
        inicio = inicio->siguiente;
        tope-=5;                
    }
    Sleep(1000);
    tope=150;
    for(int i=0;i<contador;i++){
	    gotoxy(tope,10);cout<< "   ";
	    gotoxy(tope,11);cout<< "    ";
        gotoxy(tope,12);cout<< "   ";
        gotoxy(i*20,0);cout<<"           "<<endl;
        gotoxy(i*20,1);cout <<"                    "<< endl;
        gotoxy(i*20,2);cout <<"      "<<endl;
        gotoxy(i*20,3);cout<<"                 "<<endl;
        gotoxy(i*20,4);cout<<"           "<<endl;
        gotoxy(i*20,5);cout<<"              "<<endl;
        gotoxy(i*20,6);cout<<"             "<<endl;
        Sleep(1000);  
        tope-=5;              
    }
}

