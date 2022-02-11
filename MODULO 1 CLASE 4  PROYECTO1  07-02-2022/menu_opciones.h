#include <iostream>
#include <cstdlib>
#include "operaciones.h"
#include <stdlib.h>
#include <string>

using namespace std;
using std::string;


double din1, din2, din3;
double* din1ptr,* din2ptr,* din3ptr;

int intin;
int* intinptr;

string strin;

void two_inputs();

void Menu(){

    int opc;
    
    cout<<"M E N U"<<endl
    <<"1)Suma"<<endl
    <<"2)Resta"<<endl
    <<"3)Multiplicacion"<<endl
    <<"4)Division"<<endl
    <<"5)Potencia"<<endl
    <<"6)Factorial"<<endl
    <<"7)Decimal a Binario"<<endl
    <<"8)Binario a Decimal"<<endl
    <<"9)Decimal a Octal"<<endl
    <<"10)Octal a Decimal"<<endl
    <<"11)Decimal a Hexadecimal"<<endl
    <<"12)Hexadecimal a Decimal"<<endl
    <<"Ingrese una opcion ---->";
    
    cin>>opc;

    switch(opc){
        case 1: //suma
            
            two_inputs();
            cout<<din1<<" + "<<din2<<" = ";
            suma(din1ptr,din2ptr);
            cout<<*din1ptr<<endl;
            system("pause");    
            break;

        case 2: //resta
            
            two_inputs();
            cout<<din1<<" - "<<din2<<" = ";
            resta(din1ptr,din2ptr);
            cout<<*din1ptr<<endl;
            system("pause");
            break;
        
        case 3: //multiplicacion
            
            two_inputs();
            cout<<din1<<" * "<<din2<<" = ";
            multiplicacion(din1ptr,din2ptr);
            cout<<*din1ptr<<endl;
            system("pause");
            break;
        
        case 4: //division
            
            two_inputs();
            cout<<din1<<" / "<<din2<<" = ";
            division(din1ptr,din2ptr);
            cout<<*din1ptr<<endl;
            system("pause");
            break;
        
        case 5: //potencia
            
            system("cls");
            cout<<"Ingrese la base: ";
            cin>>din1;
            din1ptr = &din1;
            cout<<"Ingrese el exponente: ";
            cin>>din2;
            din2ptr = &din2;
            cout<<din1<<" ^ "<<din2<<" = ";
            potencia(din1ptr,din2ptr);
            cout<< std::fixed << *din1ptr<<endl;
            system("pause");
            break;
        
        case 6: //facotorial

            system("cls");
            cout<<"Ingrese el numero: ";
            cin>>din1;
            din1ptr = &din1;
            cout << din1 << "!" << " = ";
            factorial(din1ptr);
            cout << std::fixed << *din1ptr<<endl;
            system("pause");
            break;

        case 7: //decimal a binario

            system("cls");
            cout << "Ingrese un numero entero: ";
            cin >> intin;
            intinptr = &intin;
            cout <<intin;
            cout <<" = " << dec_to_bin(intinptr)<< endl;
            system("pause");
            break;
        
        case 8: // binario a decimal                 

            system("cls");
            *intinptr=0;
            cout << "Ingrese una cadena de bits: ";
            cin >> strin;
            bin_to_dec(strin,intinptr);
            cout << strin << " = " << intin << endl;
            system("pause");
            break;
        
        case 9:

            break;
        
        case 10:

            break;

        case 11: //decimal a hexadecimal
            
            system("cls");
            cout << "Ingrese un numero entero: ";
            cin >> intin;
            intinptr = &intin;
            cout << intin;
            cout <<" = " << dec_to_hex(intinptr)<< endl;
            system("pause");
            break;
        
        case 12:

            break;
        
        default: 

            system("cls");
            cout << "Opcion invalida..." << endl;
            system("pause"); 
            break;
    }
}


void two_inputs(){
    system("cls");
    cout<<"Ingrese el primer numero: ";
    cin>>din1;
    din1ptr = &din1;
    cout<<"Ingrese el segundo numero: ";
    cin>>din2;
    din2ptr = &din2;
}