#include "Triangulo.h"
void Triangulo::setBase(double base){
    this->base = base;
}

double Triangulo::getBase(){
    return this->base;
}

void Triangulo::setAltura(double altura){
    this->altura = altura;
}

double Triangulo::getAltura(){
    return this->altura;
}

void Triangulo::calculaArea(){
    this->area = this->base*this->altura/2;
}

double Triangulo::getArea(){
    return this->area;
}