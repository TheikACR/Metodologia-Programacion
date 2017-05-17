#ifndef VALOR_H
#define VALOR_H

#include <iostream>

using namespace std;

class Valor{
  public:
    int fila;
    int columna;
    double valor;

    //Constructor con parámetros y por defecto
    Valor(int fila=0, int columna=0, double valor=0){
        this->fila=fila;
        this->columna=columna;
        this->valor=valor;
    }

    //Mostrar por pantalla
    void mostrar(){
        cout << "{" << fila << ", " << columna << ", " << valor << "} ";
    }
};
#endif
