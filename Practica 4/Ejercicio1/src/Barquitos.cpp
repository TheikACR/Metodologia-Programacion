#include "Barquitos.h"

//Constructor por defecto y con parametros
Barquitos::Barquitos(int fil, int col){
   filas = fil;
   columnas = col;
   matriz = new int*[filas];
   for (int i = 0; i < filas; ++i)
      matriz[i] = new int[columnas];
}

 //Constructor de copia
Barquitos::Barquitos(const Barquitos & otra){
   filas = otra.filas;
   columnas = otra.columnas;
   matriz = new int*[filas];
   for (int i = 0; i < filas; ++i){
      matriz[i] = new int[columnas];
      for (int j = 0; j < columnas; ++j)
         asignarValor(i, j, otra.obtenerValor(i, j));
   }
}

//Destructor
Barquitos::~Barquitos(){
   liberarMemoria();
}

//Liberar Memoria
void Barquitos::liberarMemoria(){
   for (int i = 0; i < filas; ++i)
		delete[] matriz[i];
	delete [] matriz;
}

//Posible ubicacion
bool Barquitos::ubicacionPosible(int fil, int col, int tam, char pos){
   if (fil < 0 || fil > filas || col < 0 || col > columnas || tam < 1 || tam > 9 || (pos != 'H' && pos != 'V'))
      return false;

   bool se_puede = true;

   if (pos == 'H'){
      for (int i = col; i < col+tam; ++i)
         if (matriz[fil][i] != 9 && matriz[fil][i] != -9) se_puede = false;
   }

   if (pos == 'V'){
      for (int i = fil; i < fil+tam; ++i)
         if (matriz[i][col] != 9 && matriz[i][col] != -9) se_puede = false;
   }

   return se_puede;
}

//Colocar Barco
void Barquitos::colocarBarco(int fil, int col, int tam, char pos){
   if (ubicacionPosible(fil, col, tam, pos)){
      if (pos == 'H'){
         for (int i = col; i < col+tam; ++i)
            asignarValor(fil, i, tam);
      }

      if (pos == 'V'){
         for (int i = fil; i < fil+tam; ++i)
            asignarValor(i, col, tam);
      }
   }
}

//Salida por pantalla de la matriz
void Barquitos::mostrarPantalla(){
   for (int i = 0; i < filas; ++i){
      for (int j = 0; j < columnas; ++j)
         cout << matriz[i][j] << " ";

      cout << endl;
   }
   cout << endl;
}

//Operador de asignacion
Barquitos & Barquitos::operator=(const Barquitos & otro){
   if(this != &otro){
      if (filas != otro.filas && columnas != otro.columnas){
         liberarMemoria();
         filas = otro.filas;
         columnas = otro.columnas;
         matriz = new int*[filas];
         for (int i = 0; i < filas; ++i)
            matriz[i] = new int[columnas];
      }
      for (int i = 0; i < filas; ++i)
         for (int j = 0; j < columnas; ++j)
            matriz[i][j] = otro.matriz[i][j];
   }
   return *this;
}
