#ifndef BARQUITOS_H
#define BARQUITOS_H

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class Barquitos{
   private:
      int filas;
      int columnas;
      int ** matriz;

   public:
      //Constructor por defecto y con parametros
      Barquitos(int=0, int=0);

      //Constructor de copia
      Barquitos(const Barquitos & otra);

      //Destructor
      ~Barquitos();

      //Posible ubicacion
      bool ubicacionPosible(int fil, int col, int tam, char pos);

      //Colocar Barco
      void colocarBarco(int fil, int col, int tam, char pos);

      //Liberacion de memoria
      void liberarMemoria();

      //Devolucion de un valor de la matriz
      inline int obtenerValor(int fil, int col) const{
         return matriz[fil][col];
      }

      //Asignacion de un valor a una posicion de la matriz
      inline void asignarValor(int fil, int col, int valor){
         matriz[fil][col] = valor;
      }

      //Muestra el tablero por pantalla
      void mostrarPantalla();

      //Operador de asignacion
      Barquitos & operator=(const Barquitos &);
};

#endif
