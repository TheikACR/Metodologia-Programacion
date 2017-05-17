#include "Precuencias.h"

//Constructor por defecto y con parametros
Precuencias::Precuencias(int npares){
   this->npares = npares;
   parejas = new Pareja[npares];
   Pareja par;
   for (int i = 0; i < npares; ++i)
      parejas[i] = par;
}

 //Constructor de copia
Precuencias::Precuencias(const Precuencias & otra){
   npares = otra.npares;
   parejas = new Pareja[npares];
   for (int i = 0; i < npares; ++i)
      parejas[i] = otra.parejas[i];
}

//Constructor de copia con punteros
Precuencias::Precuencias(const Precuencias * otra){
   npares = otra->npares;
   parejas = new Pareja[npares];
   for (int i = 0; i < npares; ++i)
      parejas[i] = otra->parejas[i];
}

//Destructor
Precuencias::~Precuencias(){
   liberarMemoria();
}

//Liberar Memoria
void Precuencias::liberarMemoria(){
   delete[] parejas;
}

//Agregar valor al array parejas
void Precuencias::agregarValor(int num){
   int numero = num, i, pos;
   bool esta = false;
   while (num > 0){
      numero = num % 10;
      num = num / 10;
      for (i = 0; i < npares; ++i)
         if (parejas[i].dato == numero){
            esta = true;
            ++parejas[i].nveces;
         }
      if (!esta){
         ++npares;
         Pareja *pareja = new Pareja[npares];
         for (int j = 0; j < npares -1; ++j)
            pareja[j] = parejas[j];
         pareja[npares-1].dato = numero;
         pareja[npares-1].nveces = 1;
         this->parejas = new Pareja[npares];
         parejas = pareja;
      }
      esta = false;
   }
}

//Salida por pantalla de la matriz
void Precuencias::mostrarPantalla(){
   for (int i = 0; i != npares; ++i)
      cout << parejas[i].dato << " sale " << parejas[i].nveces << endl;
}

//Operador ==
bool Precuencias::operator==(const Precuencias & otro) const{
   bool resultado = false;
   if (this == &otro)
      resultado = true;
   else{
      if (this->npares == otro.npares){
         resultado = true;
         for (int i = 0; i < npares && resultado; ++i)
            if (parejas[i].dato != otro.parejas[i].dato && parejas[i].nveces != otro.parejas[i].nveces)
               resultado = false;
      }
   }
   return resultado;
}

//Operador !=
bool Precuencias::operator!=(const Precuencias & otro) const{
   return !(*this==otro);
}
