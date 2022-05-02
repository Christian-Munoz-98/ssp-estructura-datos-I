#include "Node.h"
/*
-1) Insertar Datos
-2) Buscar Nodo
-a) Por ID
b) Por Nombre
-3) Mostrar Mínimo ID (Nodo)
-4) Mostrar Máximo ID (Nodo)
-5) Mostrar Nodo Antecesor
-6) Mostrar Nodo Sucesor
-7) Editar Nodo (por ID)
8) Eliminar Nodo(Por ID)
-9) Mostrar Datos en Orden
-10) Mostrar Datos en PreOrden
-11) Mostrar Datos en PostOrden
*/
class Btree{
public:
    Node* root;

    Btree();
    ~Btree();

    void insertRoot(int);
    void insert(int,Node*);

    Node* searchRoot(int);
    Node* search(int, Node*);

    void searchNameRoot(string);
    void searchName(Node*,string);

    Node* min();
    Node* max();

    void findPredSuc(Node*,Node*&, Node*&,int);

    void edit(Node*);

    void inOrderPrintRoot();
    void inOrderPrint(Node*);

    void preOrderPrintRoot();
    void preOrderPrint(Node*);

    void postOrderPrintRoot();
    void postOrderPrint(Node*);
};

Btree::Btree(){
    root = NULL;
}

void Btree::insertRoot(int id){
    if (root != NULL){
        insert(id,root);
    }
    else{
        root = new Node(id);
    }  
}

void Btree::insert(int id, Node* leaf){
    if(id < leaf->id){
        if (leaf->left!=NULL){
          insert(id,leaf->left);
        }
        else{
            Node* aux = new Node(id);
            leaf->left = aux;
        }  
    }
    else if (id>=leaf->id){
        if (leaf->right != NULL){
          insert(id,leaf->right);
        }
        else{
            Node* aux = new Node(id);
            leaf->right = aux;
        } 
    }   
}

Node* Btree::searchRoot(int id){
    return search(id,root);
}

Node* Btree::search(int id, Node* leaf){
    if (leaf != NULL){
        if (id == leaf->id){
            return leaf;
        }
        else if (id < leaf->id){
            return search(id,leaf->left);
        }
        else{
            return search(id, leaf->right);
        }
    }
    else{
        return NULL;
    }
}

void Btree::searchNameRoot(string name){
    searchName(root,name);
}

void Btree::searchName(Node* leaf,string name){
    if (leaf!=NULL){
        if (leaf->name==name){
            leaf->show();
            return;
        }
        searchName(leaf->left,name);
        searchName(leaf->right,name);
    }
}

Node* Btree::min(){
    Node* min = root;
    while (min->left!=NULL){
        min = min->left;
    }
    return min;
}

Node* Btree::max(){
    Node* max = root;
    while (max->right!=NULL){
        max = max->right;
    }
    return max;
    
}

void Btree::findPredSuc(Node* begin, Node*& pre, Node*& suc, int id){
    if (begin == NULL)  
        return ;
 
    if(begin->id == id){
        if (begin->left != NULL){
            Node* tmp = begin->left;
            while (tmp->right)
                tmp = tmp->right;
            pre = tmp ;
        }

        if (begin->right != NULL){
            Node* tmp = begin->right ;
            while (tmp->left)
                tmp = tmp->left ;
            suc = tmp ;
        }
        return ;
    }
 
    if(begin->id > id){
        suc = begin ;
        findPredSuc(begin->left, pre, suc, id) ;
    }
    else{
        pre = begin ;
        findPredSuc(begin->right, pre, suc, id) ;
    }
}

void Btree::edit(Node* leaf){
    leaf->edit();
}

void Btree::inOrderPrintRoot(){
    inOrderPrint(root);
    cout << "\n";
}

void Btree::inOrderPrint(Node* leaf){
    if (leaf!=NULL){
        inOrderPrint(leaf->left);
        leaf->show();
        inOrderPrint(leaf->right);
    }
}

void Btree::preOrderPrintRoot(){
    preOrderPrint(root);
    cout<<"\n";
}

void Btree::preOrderPrint(Node* leaf){
    if (leaf!=NULL){
        leaf->show();
        inOrderPrint(leaf->left);
        inOrderPrint(leaf->right);
    }
    
}

void Btree::postOrderPrintRoot(){
    postOrderPrint(root);
    cout<<"\n";
}

void Btree::postOrderPrint(Node* leaf){
    if (leaf != NULL){
        inOrderPrint(leaf->left);
        inOrderPrint(leaf->right);
        leaf->show();
    }
}