#ifndef PAREJA_H
#define PAREJA_H

#include <iostream>

using namespace std;

class Pareja{
  public:
    int dato;
    int nveces;

    //Constructor con parámetros y por defecto
    Pareja(int dato=0, int nveces=0){
        this->dato = dato;
        this->nveces = nveces;
    }

    //Mostrar por pantalla
    void mostrar(){
        cout << "{" << dato << " sale " << nveces << "} ";
    }
};
#endif
