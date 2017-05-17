#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class Menu{
   private:
      char * titulo;
      char ** opc;
      int nopc;

   public:
      //Constructor por defecto y con parametros
      Menu(int nopc=0, int tam_ti=20, int tam_opc=20);

      //Constructor de copia
      Menu(const Menu & otro);

      //Constructor de copia con punteros
      Menu(const Menu * otro);

      //Destructor
      ~Menu();

      //Asignar Titulo al array titulo
      void setTitulo(char tit[], int tam);

      //Return del numero de opciones
      inline int getNumeroOpciones(){
         return nopc;
      }

      //Agrega una nueva opcion al menu
      void agregarOpcion();

      //Liberacion de memoria
      void liberarMemoria();

      //Muestra el menu
      void mostrarPantalla();

      //Operador de asignacion
      Menu & operator=(const Menu &);
};

#endif
