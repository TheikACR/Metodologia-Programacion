#include "Menu.h"

//Constructor por defecto y con parametros
Menu::Menu(int nopc, int tam_ti, int tam_opc){
   this->nopc = nopc;
   titulo = new char[tam_ti];
   for (int i = 0; i < tam_ti; ++i)
      titulo[i] = '_';
   opc = new char*[nopc];
   for (int i = 0; i < nopc; ++i)
      opc[i] = new char[tam_opc];
   for (int i = 0; i < nopc; ++i)
      for (int j = 0; j < 20; ++j)
         opc[i][j] = '-';
   //He aniadido _ y - para ver que funcionaba bien
}

//Constructor de copia
Menu::Menu(const Menu & otro){
   nopc = otro.nopc;
   //Suponemos que no tenemos variables para
   //el conteo de tamanios asi que lo pondre
   //a 20 por defecto, pero se podrian aniadir
   titulo = new char[20];
   for (int i = 0; i < 20; ++i)
      titulo[i] = otro.titulo[i];
   opc = new char*[nopc];
   for (int i = 0; i < nopc; ++i){
      opc[i] = new char[20];
      for (int j = 0; j < 20; ++j)
         opc[i][j] = otro.opc[i][j];
   }
}

//Constructor de copia con punteros
Menu::Menu(const Menu * otro){
   nopc = otro->nopc;
   //Suponemos que no tenemos variables para
   //el conteo de tamanios asi que lo pondre
   //a 20 por defecto, pero se podrian aniadir
   titulo = new char[20];
   for (int i = 0; i < 20; ++i)
      titulo[i] = otro->titulo[i];
   opc = new char*[nopc];
   for (int i = 0; i < nopc; ++i){
      opc[i] = new char[20];
      for (int j = 0; j < 20; ++j)
         opc[i][j] = otro->opc[i][j];
   }
}

//Destructor
Menu::~Menu(){
   liberarMemoria();
}

//Liberar Memoria
void Menu::liberarMemoria(){
   for (int i = 0; i < nopc; ++i)
		delete[] opc[i];
	delete [] opc;
   delete [] titulo;
}

//Asignar Titulo al array titulo
void Menu::setTitulo(char tit[], int tam){
   if (tam <= 20){
      for (int i = 0; i < tam; ++i)
         titulo[i] = tit[i];
   }
}

//Agrega una nueva opcion al menu
void Menu::agregarOpcion(){
   char ** op = new char*[nopc+1];
   for (int i = 0; i < nopc+1; ++i)
      op[i] = new char[20];
   for (int i = 0; i < nopc; ++i)
      for (int j = 0; j < 20; ++j)
         op[i][j] = opc[i][j];
   ++nopc;
   opc = new char*[nopc];
   for (int i = 0; i < nopc; ++i)
      opc[i] = new char[20];
   for (int i = 0; i < nopc; ++i)
      for (int j = 0; j < 20; ++j){
         opc[i][j] = op[i][j];
         if (i == nopc-1) opc[i][j] = '-';
      }
}

//Salida por pantalla del menu
void Menu::mostrarPantalla(){
   for (int i = 0; i < 20; ++i)
      cout << titulo[i];
   cout << endl;
   for (int i = 0; i < nopc; ++i){
      cout << i+1 << ")";
      for (int j = 0; j < 20; ++j)
         cout << opc[i][j];
      cout << endl;
   }
   cout << endl;
}

//Operador de asignacion
Menu & Menu::operator=(const Menu & otro){
   if(this != &otro){
      if (nopc != otro.nopc){
         liberarMemoria();
         nopc = otro.nopc;
         opc = new char*[nopc];
         for (int i = 0; i < nopc; ++i)
            opc[i] = new char[20];
      }
      titulo = new char[20];
      for (int i = 0; i < 20; ++i)
         titulo[i] = otro.titulo[i];
      for (int i = 0; i < nopc; ++i)
         for (int j = 0; j < 20; ++j)
            opc[i][j] = otro.opc[i][j];
   }
   return *this;
}
