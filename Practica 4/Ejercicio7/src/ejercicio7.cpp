/**
   Creado por David Infante Casas
*/

#include "Precuencias.h"


int main() {
   //Creamos un objeto vacio de la clase Precuencias
   Precuencias obj;

   //Mostramos
   cout << "Creamos una precuencia vacia" << endl << endl;
   obj.mostrarPantalla();

   //Creamos una precuencia dinamica con el constructor de copia
   Precuencias *obj1 = new Precuencias(obj);

   //Agregamos un valor a dicha precuencia
   obj1->agregarValor(3993);

   //Mostramos
   cout << "Creamos una copia dinamica y le aniadimos el valor 3993" << endl << endl;
   obj1->mostrarPantalla();
   cout << endl << endl;

   //Creamos obj2 como copia de obj y comparamos si son iguales con el operador ==
   cout << "Creamos obj2 como copia de obj y\ncomparamos si son iguales con el operador ==\ndeberia salir que si" << endl << endl;
   obj.agregarValor(8484);
   Precuencias obj2 = new Precuencias(obj);
   cout << "obj: " << endl;
   obj.mostrarPantalla();
   cout << "obj2: " << endl;
   obj2.mostrarPantalla();
   if (obj == obj2)
      cout << endl << "son iguales" << endl << endl;
   else
      cout << endl << "no lo son" << endl << endl;

   cout << "Probamos de nuevo aniadiendo un valor a obj2, por tanto deberia salir que no" << endl << endl;
   obj2.agregarValor(2);
   cout << "obj: " << endl;
   obj.mostrarPantalla();
   cout << "obj2: " << endl;
   obj2.mostrarPantalla();
   if (obj == obj2)
      cout << endl << "son iguales" << endl << endl;
   else
      cout << endl << "no lo son" << endl << endl;

   //Agregamos un valor a la precuencia
   obj1->agregarValor(123456789);

   //Mostramos
   cout << "A la Precuencia dinamica le aniadimos 123456789" << endl << endl;
   obj1->mostrarPantalla();

   //Comparamos 

   //Liberamos memoria
   cout << endl << "Liberamos memoria" << endl << endl;
   delete obj1;
}
