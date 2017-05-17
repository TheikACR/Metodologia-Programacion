#ifndef POLILINEA_H
#define POLILINEA_H

#include <iostream>
#include "Punto.h"

using namespace std;

class Polilinea{
   private:
      Punto * p;
      int num;

   public:
      //Constructor por defecto y con parametros
      Polilinea(int=0);

      //Destructor
      ~Polilinea();

      //Liberar Memoria
      void liberarMemoria();

      //Constructor de Copia
      Polilinea(const Polilinea & otra);

      //Constructor de Copia con punteros
      Polilinea(const Polilinea * otra);

      //Return de la variable privada num
      inline int obtenerNum() const{
         return num;
      }

      //Return de una posicion de p
      inline Punto obtenerPunto(int pos) const{
         return p[pos];
      }

      //Asignacion de un valor en el array
      inline void asignarValor(int pos, Punto pun){
         p[pos] = pun;
      }

      //Aniadir un nuevo punto
      void agregarPunto(Punto pun);

      //Mostrar por pantalla
      void mostrar() const;

      //Sobrecarga del operador suma
      Polilinea & operator+(const Polilinea & otra) const;
};

#endif
