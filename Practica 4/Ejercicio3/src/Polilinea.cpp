#include "Polilinea.h"

//Constructor por defecto y con parametros
Polilinea::Polilinea(int num){
   this->num = num;
   p = new Punto [num];
   Punto pun;
   for (int i = 0; i < num; ++i)
      p[i] = pun;
}

//Destructor
Polilinea::~Polilinea(){
   liberarMemoria();
}

//Liberar Memoria
void Polilinea::liberarMemoria(){
   delete [] p;
}

//Constructor de Copia
Polilinea::Polilinea(const Polilinea & otra){
   num = otra.num;
   p = new Punto [num];
   for (int i = 0; i < num; ++i)
      asignarValor(i, otra.obtenerPunto(i));
}

//Constructor de Copia con punteros
Polilinea::Polilinea(const Polilinea * otra){
   num = otra->num;
   p = new Punto [num];
   for (int i = 0; i < num; ++i)
      asignarValor(i, otra->obtenerPunto(i));
}

//Aniadir un nuevo punto
void Polilinea::agregarPunto(Punto pun){
    ++num;
   Punto * pu = new Punto[num];
   for (int i = 0; i < num-1; ++i)
      pu[i] = p[i];
   pu[num-1] = pun;
   this->p = new Punto[num];
   p = pu;
}

//Mostrar por pantalla
void Polilinea::mostrar() const{
   for (int i = 0; i < num; ++i){
      p[i].mostrarPunto();
      if (i != num-1) cout << " - ";
   }
   cout << endl << endl;
}

//Sobrecarga del operador suma
Polilinea & Polilinea::operator+(const Polilinea & otra) const{
   Polilinea * resultado = new Polilinea(num + otra.num);
   for (int i = 0; i < num; ++i){
      resultado->p[i].asignarValorX(p[i].obtenerX());
      resultado->p[i].asignarValorY(p[i].obtenerY());
   }
   for (int i = 0; i < otra.num; ++i){
      resultado->p[num+i].asignarValorX(otra.p[i].obtenerX());
      resultado->p[num+i].asignarValorY(otra.p[i].obtenerY());
   }
   return *resultado;
}
