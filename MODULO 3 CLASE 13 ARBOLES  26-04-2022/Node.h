#include <iostream>

using namespace std;

class Node{
public:
    int id;
    string name;
    string direction;
    string email;
    Node* left;
    Node* right;

    Node(int);
    void edit();
    void show();
};

Node::Node(int id){
    system("cls");
    this->id = id;
    cout<<"Ingrese nombre: ";
    cin>>name;
    cout<<"Ingrese direccion: ";
    cin>>direction;
    cout<<"Ingrese email: ";
    cin>>email;
    left = NULL;
    right = NULL;
}

void Node::edit(){
        bool retry;
        do{
            retry =false;
            string change;
            int election;
            cout<<"Seleccione que desea editar:\n"<<
            "1)Nombre\n"<<
            "2)Direccion\n"<<
            "3)Email\n";
            cin>>election;
            switch (election){
                case 1:
                    cout<<"Ingrese nuevo nombre: ";
                    cin>>name;
                    break;
                
                case 2:
                    cout<<"Ingrese nueva Direccion: ";
                    cin>>direction;
                    break;
                
                case 3:
                    cout<<"Ingrese nuevo Email: ";
                    cin>>email;
                    break;
            
            default:
                cout<<"Ingrese una opcion valida"<<endl;
                retry = true;
                break;

            }
        }while(retry);
}

void Node::show(){
    cout<<"---------------"<<endl;
    cout<<"id: "<<id<<endl
    <<"Nombre: "<<name<<endl
    <<"Direccion: "<<direction<<endl
    <<"Email: "<<email<<endl;
    cout<<"---------------"<<endl;
}


