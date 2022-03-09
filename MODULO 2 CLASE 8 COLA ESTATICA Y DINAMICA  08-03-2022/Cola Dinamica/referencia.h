#include <iostream>
#include <cstdlib>

using namespace std;

class cola{
private:
	int inicio;
    int fin;
	int dato[10];
		
public: 
cola();
bool vacio(); //
void consultar_inicio(); 
void consultar_final();
void mostrar_cola();
void push();
void pop();
};

cola::cola(){
	fin=-1;
	inicio=0;
}

bool cola::vacio(){
    return fin==-1;
}

void cola::push(){
 	string x;
	if(!lleno()){
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
                fin ++;
 		        dato[fin]=stoi(x);
            }
        }
	}
    else{
        cout<<"La cola esta llena"<<endl;
        system("pause");
    }
}

void cola::pop(){
	if(!vacio()){
		for(int i=0;i<=fin;i++){
			dato[i]=dato[i+1];
		}
		dato[fin]=-1;
		fin--;
	}
    else{
        cout<<"Lea arriba -_-"<<endl;
        system("pause");
    }
}

void cola::consultar_inicio(){
	if(!vacio()){
        system("cls");
		printf("\t%c%c%c%c%c  \n",201,205,205,205,187);
		printf("\t%c ",186);
		cout<<dato[0]; 
    	printf(" %c",186);
        cout<< "<---Inicio" << endl;
		printf("\t%c%c%c%c%c\n",200,205,205,205,188);
	}
    else{
        cout<<"Lea arriba -_-"<<endl;
    }
    system("pause");
}

void cola::consultar_final(){
	if(!vacio()){
        system("cls");
		printf("\t%c%c%c%c%c  \n",201,205,205,205,187);
        cout << "Final-->";
		printf("%c ",186);
		cout<<dato[fin]; 
    	printf(" %c\n",186);
		printf("\t%c%c%c%c%c\n",200,205,205,205,188);
	}
    else{
        cout<<"Lea arriba -_-"<<endl;
    }
    system("pause");
}

void cola::mostrar_cola(){
	if(!vacio()){
	    system("cls");
        for(int i=fin;i>=0;i--){
            if(i==fin)
                printf("\t");
            printf("%c%c%c%c%c",201,205,205,205,187);
            if(i==0)
                printf("\n");
        }
        cout<<"Final-->";
		for(int i=fin;i>=0;i--){
		    if(dato[i]!=-1){
                printf("%c ",186);
                cout<<dato[i]; 
                printf(" %c",186);
            }
        }
        cout<<"<--Inicio" << endl;
        for (int i = fin; i>=0; i--){
            if(i==fin)
                printf("\t");
            printf("%c%c%c%c%c",200,205,205,205,188);
            if(i==0)
                printf("\n");
        }
        
    }
    else{
        cout<<"La cola esta vacia"<<endl;
    }
}

