#include "MatrizDispersa.h"

//Constructor por defecto y con parametros
MatrizDispersa::MatrizDispersa(int fil, int col, int valor){
   nfilas = fil;
   ncolumnas = col;
   numeroValores = valor;
   valores = new Valor[numeroValores];
   Valor val;
   for (int i = 0; i < numeroValores; ++i)
      valores[i] = val;
}

 //Constructor de copia
MatrizDispersa::MatrizDispersa(const MatrizDispersa & otra){
   nfilas = otra.nfilas;
   ncolumnas = otra.ncolumnas;
   numeroValores = otra.numeroValores;
   valores = new Valor[numeroValores];
   for (int i = 0; i < numeroValores; ++i)
      valores[i] = otra.valores[i];
}

//Constructor de copia con punteros
MatrizDispersa::MatrizDispersa(const MatrizDispersa * otra){
   nfilas = otra->nfilas;
   ncolumnas = otra->ncolumnas;
   numeroValores = otra->numeroValores;
   valores = new Valor[numeroValores];
   for (int i = 0; i < numeroValores; ++i)
      valores[i] = otra->valores[i];
}

//Constructor de copia para una matriz determinada
MatrizDispersa::MatrizDispersa(int filas[], int num_fil, int columnas[], int num_col, double val[], int num_val){
   int mayor = 0;
   for (int i = 0; i < num_fil; ++i)
      if (filas[i] > mayor) mayor = filas[i];
   nfilas = mayor;
   mayor = 0;
   for (int i = 0; i < num_col; ++i)
      if (columnas[i] > mayor) mayor = columnas[i];
   ncolumnas = mayor;
   numeroValores = num_val;
   valores = new Valor[numeroValores];
   for (int i = 0; i < numeroValores; ++i){
      Valor v(filas[i], columnas[i], val[i]);
      valores[i] = v;
   }
}

//Destructor
MatrizDispersa::~MatrizDispersa(){
   liberarMemoria();
}

//Liberar Memoria
void MatrizDispersa::liberarMemoria(){
   delete[] valores;
}

//Salida por pantalla de la matriz
void MatrizDispersa::mostrarPantalla(){
   bool esta = false;
   int pos;
   for (int i = 0; i < nfilas; ++i){
      for (int j = 0; j < ncolumnas; ++j){
         for (int k = 0; k < numeroValores; ++k)
            if (valores[k].fila == i && valores[k].columna == j){ esta = true; pos = k;}
         if (esta) cout << valores[pos].valor << " ";
         else cout << "0" << " ";
         esta = false;
      }
      cout << endl;
   }
   cout << endl;
}

//Sobrecarga del operador suma
MatrizDispersa & MatrizDispersa::operator+(const MatrizDispersa & otra) const{
   MatrizDispersa * resultado = new MatrizDispersa;
   Valor * v = new Valor[otra.numeroValores + numeroValores];
   int tam = 0;

   if (nfilas == otra.nfilas && ncolumnas == otra.ncolumnas){
      resultado->nfilas = nfilas;
      resultado->ncolumnas = ncolumnas;
      bool esta = false;

      for (int i = 0; i < numeroValores; ++i){
         v[i] = valores[i];
         ++tam;
      }

      for (int i = 0; i < otra.numeroValores; ++i){
         for (int j = 0; j < numeroValores && !esta; ++j){
            if (v[j].fila == otra.valores[i].fila && v[j].columna == otra.valores[i].columna){
               esta = true;
               v[j].valor = v[j].valor + otra.valores[i].valor;
            }
         }
         if (!esta){
            v[tam] = otra.valores[i];
            ++tam;
         }
         esta = false;
      }
   }
   Valor * va = new Valor[tam];
   for (int i = 0; i < tam; ++i)
      va[i] = v[i];
   delete v;
   resultado->numeroValores = tam;
   resultado->valores = va;
   return *resultado;
}
