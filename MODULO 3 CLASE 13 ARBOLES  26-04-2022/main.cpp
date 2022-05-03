#include "Btree.h"

int main(){

    Btree* tree = new Btree();

    tree->insertRoot(9);
    tree->insertRoot(7);
    tree->insertRoot(20);
    tree->insertRoot(5);
    tree->insertRoot(1);

    cout<<"PREORDEN"<<endl;
    tree->preOrderPrintRoot();
    system("pause");

    system("cls");
    cout<<"ORDEN"<<endl;
    tree->inOrderPrintRoot();
    system("pause");

    system("cls");
    cout<<"POSTORDEN"<<endl;
    tree->postOrderPrintRoot();
    system("pause");

    system("cls");
    cout<<"MINIMO"<<endl;
    Node* min = tree->min();
    min->show();
    system("pause");

    system("cls");
    cout<<"MAXIMO"<<endl;
    Node* max = tree->max();
    max->show();
    system("pause");

    system("cls");
    cout<<"EDITAR"<<endl;
    tree->edit(tree->searchRoot(20));
    tree->searchRoot(20)->show();
    system("pause");

    system("cls");
    cout<<"Buscar (id 20)"<<endl;
    Node* finded = tree->searchRoot(20);
    finded->show();
    Node* pre = NULL, *suc = NULL;
    tree->findPredSuc(tree->root,pre,suc,finded->id);
    if (pre != NULL)
      cout << "Predecessor is " << pre->id << endl;
    else
      cout << "No Predecessor"<<endl;
 
    if (suc != NULL)
      cout << "Successor is " << suc->id<<endl;
    else
      cout << "No Successor"<<endl;
    system("pause");

    system("cls");
    cout<<"Buscar por Nombre"<<endl;
    string nombre;
    cout<<"Ingrese Nombre: ";
    cin>>nombre;
    tree->searchNameRoot(nombre);
    system("pause");

    printf("Inorder traversal of the given tree \n");
    tree->inOrderPrintRoot();
 
    system("cls");
    printf("\nDelete 7\n");
    tree->root = tree->deleteNode(tree->root,7);
    printf("Inorder traversal of the modified tree \n");
    tree->inOrderPrintRoot();
    system("pause");
 
    system("cls");
    printf("\nDelete 30\n");
    tree->root = tree->deleteNode(tree->root,20);
    printf("Inorder traversal of the modified tree \n");
    tree->inOrderPrintRoot();
    system("pause");
 
    system("cls");
    printf("\nDelete 50\n");
    tree->root = tree->deleteNode(tree->root,5);
    printf("Inorder traversal of the modified tree \n");
    tree->inOrderPrintRoot();
    system("pause");
    
    return 0;
}