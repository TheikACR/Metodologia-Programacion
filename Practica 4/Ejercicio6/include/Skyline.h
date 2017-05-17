#ifndef SKYLINE_H
#define SKYLINE_H

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class Skyline{
   private:
      double * abscisas;
      double * alturas;
      int n;

   public:
      //Constructor por defecto y con parametros
      Skyline(int=0);

      //Constructor de un edificio
      Skyline(double ini, double fin, double alt);

      //Constructor de copia
      Skyline(const Skyline & otro);

      //Constructor de copia con punteros
      Skyline(const Skyline * otro);

      //Destructor
      ~Skyline();

      //Liberacion de memoria
      void liberarMemoria();

      //Return de n
      inline int obtenerN() const{
         return n;
      }

      //Devolucion de un valor del array de abscisas
      inline double obtenerValorAbs(int pos) const{
         return abscisas[pos];
      }

      //Devolucion de un valor del array de alturas
      inline double obtenerValorAlt(int pos) const{
         return alturas[pos];
      }

      //Muestra el tablero por pantalla
      void mostrarPantalla();

      //Operador []
      double & operator[](int);

      //Operador [] const
      double & operator[](int) const;
};

#endif
