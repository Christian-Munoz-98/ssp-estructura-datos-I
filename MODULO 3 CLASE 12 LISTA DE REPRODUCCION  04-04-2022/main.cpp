#include <iostream>
#include <fstream>

using namespace std;

void fwrite();

int main(){
    fwrite();
    return 0;
}

void fwrite(){
    ofstream file("C:/Users/Usuario/Documents/test.txt");
    if(!file)
        cout << "\n Error al abrir el archivo \n";
    else{
        file<<1<<" "<<10<<" A" << endl;
        file<<2<<" "<<20<<" B" << endl;
        file<<3<<" "<<30<<" C" << endl;
        file.close();
    }
    
}