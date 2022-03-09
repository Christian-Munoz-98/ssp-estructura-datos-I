#include "Node.h"
#include <cstdlib>
using namespace std;

class Cola{
private:
    int contador;
    Nodo* frente;
    Nodo* atras;

public:
    Cola();
    bool Vacio();
    void Frente();
    void Atras();
    void MostrarCola();
    void Push();
    void Pop();
};

Cola::Cola(){
    contador = 0;
    frente = NULL;
    atras = NULL;
}

bool Cola::Vacio(){
    return contador <= 0;
}
 
void Cola::Frente(){
	if(!Vacio()){
        system("cls");
		printf("\t%c%c%c%c%c  \n",201,205,205,205,187);
		printf("\t%c ",186);
		cout<<frente->GetVal(); 
    	printf(" %c",186);
        cout<< "<---Inicio" << endl;
		printf("\t%c%c%c%c%c\n",200,205,205,205,188);
	}
    else{
        cout<<"Lea arriba -_-"<<endl;
    }
    system("pause");
}

void Cola::Atras(){
	if(!Vacio()){
        system("cls");
		printf("\t%c%c%c%c%c  \n",201,205,205,205,187);
        cout << "Final-->";
		printf("%c ",186);
		cout<<atras->GetVal();
    	printf(" %c\n",186);
		printf("\t%c%c%c%c%c\n",200,205,205,205,188);
	}
    else{
        cout<<"Lea arriba -_-"<<endl;
    }
    system("pause");
}

void Cola::MostrarCola(){
    Nodo* inicio= frente;
	if(!Vacio()){
	    system("cls");
        for(int i=contador;i>=0;i--){
            if(i==contador)
                printf("\t");
            printf("%c%c%c%c%c",201,205,205,205,187);
            if(i==0)
                printf("\n");
        }
        cout<<"Final-->";
		for(int i=contador;i>=0;i--){
		    if(inicio!=NULL){
                printf("%c ",186);
                cout<<inicio->GetVal(); 
                printf(" %c",186);
            }
            inicio = inicio->GetSig();
        }
        cout<<"<--Inicio" << endl;
        for (int i =contador; i>=0; i--){
            if(i==contador)
                printf("\t");
            printf("%c%c%c%c%c",200,205,205,205,188);
            if(i==0)
                printf("\n");
        }       
    }
    else{
        cout<<"La cola esta vacia..."<<endl;
    }  
}

void Cola::Push(){
    string x;

	cout<<"Ingrese dato >> ";
   	cin>>x;
    if(!isdigit(x[0])){
        cout<<"Error! Ingrese un numero!..."<<endl;
        system("pause");
    }
    else{
        if(stoi(x)>9||stoi(x)<0){
            cout<<"Si ingresa ese numero la cola se va a ver fea :P"<<endl;
            system("pause");
        }
        else{
            Nodo* nuevo = new Nodo(stoi(x));
            if(contador== 0){
                nuevo->SetSig(NULL);
                frente = nuevo;
                atras = frente;
            }
            else{
                atras->SetSig(nuevo);
                atras = nuevo;
            }
            contador++;
        }
    }
}

void Cola::Pop(){
    if(Vacio())
        cout << "Lea Arriba -_-" << endl;
    else{
        Nodo* eliminar= frente;
        frente = frente->GetSig();
        delete eliminar;
        contador--;
    }
}