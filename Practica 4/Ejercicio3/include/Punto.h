#ifndef PUNTO_H
#define PUNTO_H

#include <iostream>

using namespace std;

class Punto{
   private:
      int x, y;

   public:
      //Constructor por defecto y con parametros
      Punto(int x=0, int y=0){
         this->x = x;
         this->y = y;
      }

      //Return de la variable privada x
      inline int obtenerX() const{
         return x;
      }
   
      //Return de la variable privada y
      inline int obtenerY() const{
         return y;
      }

      //Asignacion de un valor a la variable privada x
      void asignarValorX(int x){
         this->x = x;
      }

      //Asignacion de un valor a la variable privada y
      void asignarValorY(int y){
         this->y = y;
      }

      //Mostrar por pantalla un punto
      void mostrarPunto() const{
         cout << x << " " << y;
      }

};

#endif
