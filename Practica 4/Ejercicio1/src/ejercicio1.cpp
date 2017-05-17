/**
   Creado por David Infante Casas
*/

#include "Barquitos.h"


int main() {
   //Creamos un tablero
   Barquitos tab(12, 11);

   //Llenamos el tablero de agua
   for (int i = 0; i < 12; ++i)
      for (int j = 0; j < 11; ++j)
         tab.asignarValor(i, j, 9);

   cout << "Creamos un tablero, lo llenamos de agua y mostramos" << endl << endl;
   //Mostramos el tablero por pantalla
   tab.mostrarPantalla();

   //Colocamos 4 barcos del ejemplo
   tab.colocarBarco(1, 2, 1, 'H');
   tab.colocarBarco(2, 6, 3, 'H');
   tab.colocarBarco(3, 3, 4, 'V');
   tab.colocarBarco(4, 1, 1, 'H');
   tab.colocarBarco(1, 3, 1, 'H');

   cout << "Colocamos 4 barcos del ejemplo y mostramos" << endl << endl;
   //Mostramos el resultado por pantalla
   tab.mostrarPantalla();

   //Nuevo objeto copiando el anterior
   Barquitos* tab2 = new Barquitos(tab);

   //Colocar un barco en tab2
   tab2->colocarBarco(6, 9, 4, 'V');

   cout << "Creamos un tablero dinamico con el constructor de copia a \npartir del primero y le colocamos un barco nuevo de tamanio 4" << endl << endl;
   //Mostramos el nuevo objeto copiado
   tab2->mostrarPantalla();

   //Creamos un tablero con tamanio totalmente diferente al del tab
   Barquitos tab3(3, 5);

   //Mostramos tab3, usamos el operador de asignacion con tab y lo volvemos a mostrar
   //ver que se ha copiado bien
   cout << "Creamos y mostramos un nuevo tablero creado 3x5" << endl << endl;
   tab3.mostrarPantalla();
   cout << "Igualamos el tablero nuevo al primer tablero \nMostramos el tablero recien modificado" << endl << endl;
   tab3 = tab;
   tab3.mostrarPantalla();

   //Liberamos la memoria de tab2
   cout << "Liberamos memoria del tablero dinamico" << endl << endl;
   delete tab2;
}
