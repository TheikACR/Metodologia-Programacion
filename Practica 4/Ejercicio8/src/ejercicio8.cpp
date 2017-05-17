/**
   Creado por David Infante Casas
*/

#include "Menu.h"


int main() {
   //Creamos un menu con 2 opciones
   Menu obj(2);

   //Creamos un array para darle titulo al menu
   char * tit = new char[15];
   for (int i = 0; i < 15; ++i)
      tit[i] = 'a';

   //Le damos el titulo
   obj.setTitulo(tit, 15);

   //Lo mostramos junto con el numero de opciones
   cout << "Creamos un nuevo Menu y le agregamos un titulo de 15 'a'" << endl << endl;
   obj.mostrarPantalla();
   cout << "el numero de opciones del menu: " << obj.getNumeroOpciones() << endl << endl;

   cout << endl;

   //Creamos una copia dinamica de nuestro menu
   cout << "Creamos una copia dinamica de nuestro Menu" << endl << endl;
   Menu * obj1 = new Menu(obj);
   obj1->mostrarPantalla();
   cout << "el numero de opciones del menu: " << obj1->getNumeroOpciones() << endl << endl;

   cout << endl;

   //Le aniadimos una nueva opcion y lo probamos
   cout << "Le agregamos una nueva opcion comprobamos que funciona" << endl << endl;
   obj1->agregarOpcion();
   obj1->mostrarPantalla();
   cout << "el numero de opciones del menu: " << obj1->getNumeroOpciones() << endl << endl;

   //Creamos un Menu vacio y le copiamos el primer Menu con el operador sobrecargado =
   cout << "Creamos un Menu vacio y le copiamos el primer Menu con el operador sobrecargado =" << endl << endl;
   Menu obj2;
   obj2 = obj;
   obj2.mostrarPantalla();
   cout << "el numero de opciones del menu: " << obj2.getNumeroOpciones() << endl << endl;

   //Liberamos memoria
   cout << "Liberamos memoria" << endl << endl;
   delete obj1;
}
