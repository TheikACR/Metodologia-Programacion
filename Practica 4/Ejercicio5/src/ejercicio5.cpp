/**
   Creado por David Infante Casas
*/

#include "MatrizDispersa.h"


int main() {
   //Creamos una matriz 3x3 y le aniadimos el valor creado
   MatrizDispersa obj(3,3,1);
   Valor val(2,2,4);
   obj.asignarValor(0, val);

   //Mostramos la matriz por pantalla
   cout << "Creamos una matriz 3x3 con un valor 4 en la posicion 2,2" << endl << endl;
   obj.mostrarPantalla();

   //Creamos una nueva matriz a partir de la primera
   MatrizDispersa obj1(obj);

   //Mostramos la segunda matriz por pantalla
   cout << "Hacemos una copia de ella con el constructor de copia" << endl << endl;
   obj1.mostrarPantalla();

   //Creamos una nueva matriz dinamica a partir de la segunda
   MatrizDispersa * obj2 = new MatrizDispersa(obj1);

   //Mostramos la tercera matriz por pantalla
   cout << "Hacemos una copia dinamica de la anterior" << endl << endl;
   obj2->mostrarPantalla();
   
   //Creamos los arrays
   int * fil = new int[5];
   int * col = new int [5];
   double * valo = new double [4];

   for (int i = 0; i < 5; ++i)
      fil[i] = i;
   for (int i = 0; i < 5; ++i)
      col[i] = i;
   for (int i = 0; i < 4; ++i)
      valo[i] = i+1;

   //Creamos obj3 con los arrays
   MatrizDispersa obj3(fil, 5, col, 5, valo, 4);

   //Mostramos la tercera matriz por pantalla
   cout << "Creamos una matriz 4x4 con el metodo especifico y elementos en su diagonal" << endl << endl;
   obj3.mostrarPantalla();

   //Creamos una matriz a partir de la suma de obj y obj1
   cout << "Creamos una nueva MatrizDispersa de la suma de obj y obj1" << endl << endl;
   MatrizDispersa * suma = new MatrizDispersa(obj + obj1);
   suma->mostrarPantalla();

   //Liberamos la memoria de obj2 y suma
   cout << "Liberamos memoria" << endl << endl;
   delete obj2;
   delete suma;
}
