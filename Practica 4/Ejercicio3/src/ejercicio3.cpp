/**
   Creado por David Infante Casas

*/

#include "Polilinea.h"

int main(){

   //Creamos una linea y un punto
   Polilinea obj(5);
   Punto pun(3, 4);

   //Metemos los puntos en la linea
   for (int i = 0; i < 5; ++i)
      obj.asignarValor(i, pun);

   cout << "Creamos una Polilinea de tamanio 5 y le asignamos\nun nuevo objeto tipo Punto creado con valores 3 y 4" << endl << endl;
   //Mostramos
   obj.mostrar();

   //Creamos dos nuevos objetos uno estatico y otro dinamico
   Polilinea obj1(obj);
   Polilinea * obj2 = new Polilinea(obj1);

   //Mostramos
   cout << "Creamos una Polilinea nueva con el constructor de copia\ny otra mas con el constructor de copia\npero dinamica y las mostramos" << endl << endl;
   obj1.mostrar();
   obj2->mostrar();

   Punto pun1(8,0);

   //Aniadimos el nuevo punto creado
   obj1.agregarPunto(pun1);   
   obj2->agregarPunto(pun1);

   //Mostramos
   cout << "Les aniadimos un nuevo punto con valores 8 y 0" << endl << endl;
   obj1.mostrar();
   obj2->mostrar();

   //Creamos una nueva Polilinea a partir de la suma de dos
   cout << "Creamos una nueva Polilinea a partir de la suma de la\nprimera y de una de las segundas con el operador sobrecargado suma" << endl << endl;
   Polilinea * suma = new Polilinea(obj + obj1);

   //La mostramos
   suma->mostrar();

   //Liberamos memoria
   cout << "Liberamos memoria" << endl << endl;
   delete obj2;
   delete suma;
}
