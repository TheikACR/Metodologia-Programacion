#include "Skyline.h"

//Constructor por defecto y con parametros
Skyline::Skyline(int n){
   this->n = n;
   abscisas = new double[n];
   alturas = new double[n];
   for (int i = 0; i < n; ++i){
      abscisas[i] = 0;
      alturas[i] = 0;
   }      
}

//Constructor de un edificio
Skyline::Skyline(double ini, double fin, double alt){
   n = 2;
   abscisas = new double[n];
   alturas = new double[n];
   abscisas[0] = ini;
   abscisas[1] = fin;
   alturas[0] = alt;
   alturas[1] = alt;
}

//Constructor de copia
Skyline::Skyline(const Skyline & otro){
   n = otro.n;
   abscisas = new double[n];
   alturas = new double[n];
   for (int i = 0; i < n; ++i){
      abscisas[i] = otro.obtenerValorAbs(i);
      alturas[i] = otro.obtenerValorAlt(i);
   }
}

//Constructor de copia con punteros
Skyline::Skyline(const Skyline * otro){
   n = otro->n;
   abscisas = new double[n];
   alturas = new double[n];
   for (int i = 0; i < n; ++i){
      abscisas[i] = otro->obtenerValorAbs(i);
      alturas[i] = otro->obtenerValorAlt(i);
   }
}

//Destructor
Skyline::~Skyline(){
   liberarMemoria();
}

//Liberar Memoria
void Skyline::liberarMemoria(){
	delete [] abscisas;
	delete [] alturas;
}

//Salida por pantalla de la matriz
void Skyline::mostrarPantalla(){
   for (int i = 0; i < n; ++i){
      cout << alturas[i] << " ";
   }
   cout << endl;
   for (int i = 0; i < n; ++i){
      cout << abscisas[i] << " ";
   }
   cout << endl << endl;
}

//Operador []
double & Skyline::operator[](int indice){
   return abscisas[indice];
}

//Operador [] const
double & Skyline::operator[](int indice) const{
   return abscisas[indice];
}

