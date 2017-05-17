/**
   Creado por David Infante Casas
*/

#include "BigInt.h"


int main() {
   cout << "En este ejercicio la salida por pantalla de los BigInt\nsera doble, la primera con la funcion mostrarPantalla\ny la segunda con el operador sobrecargado <<" << endl << endl;
   cout << "Ademas los BigInt, tal y como se indica en el enunciado,\nse leeran de atras hacia adelante, para leerlos del\nderecho solo habria que recorrer el array desde\ntamanio-1 hasta 0" << endl << endl;
   //Creamos un BigInt
   BigInt a(13);

   //Llenamos el array
   for (int i = 0; i < 13; ++i)
      a.asignarValor(i, 7);

   //Mostramos el array por pantalla
   cout << "Creamos un BigInt de 13 posiciones todas a 7" << endl << endl;
   a.mostrarPantalla();
   cout << a;

   //Nuevo objeto copiando el anterior
   BigInt* b = new BigInt(a);

   //Cambiamos un valor en el array
   b->asignarValor(4, 5);

   //Mostramos el array por pantalla
   cout << "Creamos un BigInt dinamico con el constructor de copia a partir\ndel anterior y le agregamos el valor 5 en la posicion 4" << endl << endl;
   b->mostrarPantalla();
   cout << b;

   //Nuevo objeto copiando el anterior
   BigInt* c = new BigInt(b);

   //Cambiamos un valor en el array
   c->asignarValor(8, 3);

   //Mostramos el array por pantalla
   cout << "Creamos otro BigInt dinamico con el constructor de copia a partir\ndel anterior y la agregamos el valor 3 en la posicion 8" << endl << endl;
   c->mostrarPantalla();
   cout << c;

   //Suma a con b
   BigInt* suma = b->sumaBigInt(c);

   //Mostramos el array por pantalla
   cout << "Creamos un BigInt dinamico mas a partir de la suma\nde los dos anteriores y lo mostramos" << endl << endl;
   suma->mostrarPantalla();
   cout << suma;

   //Liberamos la memoria de b y de suma
   cout << "Liberamos la memoria de los 3 BigInt dinamicos" << endl << endl;
   delete b;
   delete c;
   delete suma;
}
