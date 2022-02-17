#include <iostream>
#include <string>
#include "Triangulo.h"
#include "Cuadrado.h"
#include "Rectangulo.h"
#include "Poligono.h"

using namespace std;

/*string numero = "125879689077854654";
cout<< d_input(numero) << endl;
cout<< stod(numero)*2 <<endl;*/


bool d_input(string);
bool i_input(string);

int main(){
    string numero = "123A456789";
    cout<< i_input(numero) << endl;
    cout<< stoi(numero)*2 <<endl;

}

bool d_input(string input){
    int length = input.length();
    int point_counter = 0;
    for(int i=0; i<length;i++){

        cout << input[i] << endl;

        if(!isdigit(input[i])){
            if(input[i]=='.'){
                point_counter++;
                cout << "Puntos: " << point_counter << endl;
                if(point_counter>1){
                    return false;
                }
            }
            else{
                return false;
            }
        }

    }
    return true;
}

bool i_input(string input){
    int length = input.length();
    for(int i=0; i<length;i++){

        cout << input[i] << endl;

        if(!isdigit(input[i])){
            return false;
        }

    }
    return true;
}

