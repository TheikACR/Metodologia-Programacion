/**
   Creado por David Infante Casas
*/

#include "Skyline.h"


int main() {
   //Creamos un Edificio
   Skyline obj(3, 5, 3);

   //Mostramos el edificio por pantalla
   cout << "Creamos un Edificio que empiece en 3, acabe en 5 y tenga altura 3" << endl << endl;
   obj.mostrarPantalla();

   //Hacemos una copia en obj1
   Skyline obj1(obj);

   //Mostramos la copia por pantalla
   cout << "Creamos un nuevo edificio con el constructor de copia a partir del primero" << endl << endl;
   obj1.mostrarPantalla();

   //Creamos un skyline dinamico
   Skyline * obj2 = new Skyline(obj1);

   //Mostramos la copia dinamica por pantalla
   cout << "Creamos un nuevo edificio dinamico con el constructor de copia a partir del anterior" << endl << endl;
   obj2->mostrarPantalla();
   
   //Liberamos obj2
   cout << "Liberamos memoria" << endl << endl;
   delete obj2;
}
