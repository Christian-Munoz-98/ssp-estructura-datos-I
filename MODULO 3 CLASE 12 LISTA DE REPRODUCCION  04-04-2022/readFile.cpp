#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream myFile;
    myFile.open("read.txt",ios::in);
    if (myFile.is_open()){
        string line;
        while(getline(myFile,line)){
            cout<<line<<endl;
        }
        myFile.close();
    }
    
    system("pause");
}