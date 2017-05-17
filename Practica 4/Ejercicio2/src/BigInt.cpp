#include "BigInt.h"

//Constructor por defecto y con parametros
BigInt::BigInt(int tam){
   tamanio = tam;
   array = new int[tam];
   for (int i = 0; i < tamanio; ++i)
      array[i] = 0;
}

//Constructor de copia
BigInt::BigInt(const BigInt & otro){
   tamanio = otro.tamanio;
   array = new int [tamanio];
   for (int i = 0; i < tamanio; ++i)
      asignarValor(i, otro.obtenerValor(i));
}

//Constructor de copia con punteros
BigInt::BigInt(const BigInt * otro){
   tamanio = otro->tamanio;
   array = new int [tamanio];
   for (int i = 0; i < tamanio; ++i)
      asignarValor(i, otro->obtenerValor(i));
}

//Destructor
BigInt::~BigInt(){
   liberarMemoria();
}

//Liberar Memoria
void BigInt::liberarMemoria(){
	delete [] array;
}

//Salida por pantalla del array
void BigInt::mostrarPantalla(){
   for (int i = 0; i < tamanio; ++i)
      cout << array[i] << " ";   
   cout << endl;
}

//Metodo de suma de BigInt
BigInt* BigInt::sumaBigInt(const BigInt * otro){
   int tam, acarreo = 0;
   if (tamanio > otro->tamanio) tam = tamanio+1;
   else tam = otro->tamanio+1;
   BigInt* suma = new BigInt(tam);
   for (int i = 0; i < tam; ++i){
      if (i == tam-1) suma->asignarValor(i, acarreo);
      else if (obtenerValor(i)+otro->obtenerValor(i) > 9){
         suma->asignarValor(i, (obtenerValor(i)+otro->obtenerValor(i) + acarreo) % 10);
         acarreo = 1;
      }
      else{
         suma->asignarValor(i, obtenerValor(i)+otro->obtenerValor(i) + acarreo);
         acarreo = 0;
      }      
   }
   return suma;
}

//Declaracion de la funcion amiga del operador de flujo de salida
ostream & operator<<(ostream & output, const BigInt & otro){
   output << endl;
   for (int i = 0; i < otro.tamanio; ++i)
      output << otro.array[i] << " ";
   output << endl << endl;
   return output;
}

//Declaracion de la funcion amiga del operador de flujo de salida para punteros
ostream & operator<<(ostream & output, const BigInt * otro){
   output << endl;
   for (int i = 0; i < otro->tamanio; ++i)
      output << otro->array[i] << " ";
   output << endl << endl;
   return output;
}
