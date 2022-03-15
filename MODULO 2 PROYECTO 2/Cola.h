#include "Pasajero.h"

class Cola{
private:
    int contador;
    Pasajero* frente;
    Pasajero* atras;

public:
    Cola();
    bool Vacio();
    void Recepcion();
    void Asientos();
    void Equipaje();
    void Push();
    Pasajero* Pop();
    int getCount();
};

Cola::Cola(){
    contador = 0;
    frente = NULL;
    atras = NULL;
}

bool Cola::Vacio(){
    return contador <= 0;
}

void Cola::Recepcion(){
    Pasajero* inicio=frente;
	system("cls");
    int tope=150;
    int x=0;
    for(int i=0;i<contador;i++){
        gotoxy(155,8);cout<<"|RECEPCION|"<<endl;
        gotoxy(155,9);cout<<"     O     "<<endl;
        gotoxy(155,10);cout<<"    /|\\    "<<endl;
        gotoxy(155,11);cout<<"-----------"<<endl;
        gotoxy(155,12);cout<<"||  / \\  ||"<<endl;
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
        gotoxy(x*20,0);cout<<"----------"<<endl;
        gotoxy(x*20,1);cout <<"Nombre: "<<inicio->nombre<< endl;
        gotoxy(x*20,2);cout <<"Id: "<<inicio->id<<endl;
        gotoxy(x*20,3);cout<<"Boleto: "<<inicio->boleto<<endl;
        gotoxy(x*20,4);cout<<"----------"<<endl;
        inicio = inicio->siguiente;
        tope-=5;
        if((x+1)%10==0){
            system("cls");
            x=0;
            tope=150;
        }
        else{
            x++;
        }             
    }
    Sleep(1000);
    tope=150;
    x=0;
    for(int i=0;i<contador;i++){
        gotoxy(tope,9);cout<< "   ";
	    gotoxy(tope,10);cout<< "   ";
	    gotoxy(tope,11);cout<< "    ";
        gotoxy(tope,12);cout<< "   ";
        gotoxy(x*20,0);cout<<"           "<<endl;
        gotoxy(x*20,1);cout <<"                    "<< endl;
        gotoxy(x*20,2);cout <<"      "<<endl;
        gotoxy(x*20,3);cout<<"                 "<<endl;
        gotoxy(x*20,4);cout<<"           "<<endl;
        Sleep(1000);  
        tope-=5;
        if((x+1)%10==0){
            system("cls");
            x=0;
            tope=150;
        }
        else{
            x++;
        }                
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
    system("pause");
}

void Cola::Equipaje(){
    Pasajero* inicio=frente;
	system("cls");
    int tope=150;
    for(int i=contador-1;i>=0;i--){
        gotoxy(155,8);cout<<"|EQUIPAJE|"<<endl;
        gotoxy(155,9);cout<<"     O     "<<endl;
        gotoxy(155,10);cout<<"    /|\\    "<<endl;
        gotoxy(155,11);cout<<"-----------"<<endl;
        gotoxy(155,12);cout<<"||  / \\  ||"<<endl;
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
        if(i==10){
            system("cls");
        }               
    }
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

Pasajero* Cola::Pop(){
    Pasajero* sacar= frente;
    frente = frente->siguiente;
    contador--;
    return sacar;
}

int Cola::getCount(){
    return contador;
}