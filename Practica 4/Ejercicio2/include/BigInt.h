#ifndef BIGINT_H
#define BIGINT_H

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class BigInt{
   private:
      int tamanio;
      int * array;

   public:
      //Constructor por defecto y con parametros
      BigInt(int=0);

      //Constructor de copia
      BigInt(const BigInt & otro);
      
      //Constructor de copia con punteros
      BigInt(const BigInt * otro);

      //Destructor
      ~BigInt();

      //Liberacion de memoria
      void liberarMemoria();

      //Devolucion de un valor del array
      inline int obtenerValor(int pos) const{
         return array[pos];
      }

      //Asignacion de un valor a una posicion del array
      inline void asignarValor(int pos, int valor){
         if (valor >= 0 && valor <= 9) array[pos] = valor;
      }

      //Muestra el array por pantalla
      void mostrarPantalla();

      //Metodo de suma de BigInt
      BigInt* sumaBigInt(const BigInt * otro);

      //Declaracion de la funcion amiga del operador de flujo de salida
      friend ostream & operator<<(ostream &, const BigInt &);
      
      //Declaracion de la funcion amiga del operador de flujo de salida para punteros
      friend ostream & operator<<(ostream &, const BigInt *);
};

#endif
