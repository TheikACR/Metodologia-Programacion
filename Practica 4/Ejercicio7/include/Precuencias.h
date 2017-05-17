#ifndef PRECUENCIAS_H
#define PRECUENCIAS_H

#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Pareja.h"
using namespace std;

class Precuencias{
   private:
      Pareja * parejas;
      int npares;

   public:
      //Constructor por defecto y con parametros
      Precuencias(int=0);

      //Constructor de copia
      Precuencias(const Precuencias & otra);

      //Constructor de copia con punteros
      Precuencias(const Precuencias * otra);

      //Destructor
      ~Precuencias();

      //Liberacion de memoria
      void liberarMemoria();

      //Devolucion una pareja del array
      inline Pareja obtenerPareja(int pos) const{
         return parejas[pos];
      }

      //Agregar valor al array parejas
      void agregarValor(int num);

      //Muestra el tablero por pantalla
      void mostrarPantalla();

      //Operador ==
      bool operator==(const Precuencias &) const;

      //Operador !=
      bool operator!=(const Precuencias &) const;
};

#endif
