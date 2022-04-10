#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream myFile;
    string mensaje;
    myFile.open("hola.txt",ios::app);
    if (myFile.is_open()){
        myFile<<"hola1\n";
    }
    myFile.open("hola.txt",ios::app);
    if (myFile.is_open()){
        myFile<<"hola2\n";
    }
   
    system("pause");
}