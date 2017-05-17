#ifndef MATRIZDISPERSA_H
#define MATRIZDISPERSA_H

#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Valor.h"
using namespace std;

class MatrizDispersa{
   private:
      int nfilas;
      int ncolumnas;
      Valor * valores;
      int numeroValores;

   public:
      //Constructor por defecto y con parametros
      MatrizDispersa(int=0, int=0, int=0);

      //Constructor de copia
      MatrizDispersa(const MatrizDispersa & otra);

      //Constructor de copia con punteros
      MatrizDispersa(const MatrizDispersa * otra);

      //Constructor de copia para una matriz determinada
      MatrizDispersa(int filas[], int num_fil, int columnas[], int num_col, double val[], int num_val);

      //Destructor
      ~MatrizDispersa();

      //Liberacion de memoria
      void liberarMemoria();

      //Devolucion de un valor de la matriz
      inline Valor obtenerValor(int pos) const{
         return valores[pos];
      }

      //Asignacion de un valor a una posicion de la matriz
      inline void asignarValor(int pos, Valor val){
         valores[pos] = val;
      }

      //Muestra el tablero por pantalla
      void mostrarPantalla();

      //Sobrecarga del operador suma
      MatrizDispersa & operator+(const MatrizDispersa &) const;
};

#endif
