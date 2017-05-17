#ifndef LISTA_H
#define LISTA_H

#include "celda.h"

class Lista{
	private:
		Celda * inicio;
		int tam;

	public:
		//Constructor por defecto y con argumentos
		Lista(int=0);
		
		//Retorna el valor privado del puntero inicio
		inline Celda * obtenerInicio(){
			return inicio;
		}

		inline void setTam(int tmn){
			tam = tmn;
		}

		inline void setInicio (Celda* ini){
			inicio = ini;
		}

		//Muestra por pantalla cada valor info de cada Celda de la lista
		void mostrar();

		//Devuelve el valor de tam
		int obtenerLongitud();

		//Agrega una Celda al final de la Lista
		void agregarFinal(double valor);

		//Elimina la ultima Celda de la lista
		void eliminarFinal();

		//Agrega una Celda al inicio de la lista
		void agregarElemento(double valor);

      //Agrega una Celda al inicio reestructurando los punteros
      void agregarInicio(double valor);

		//Devuelve el puntero a una Celda en posicion i
		Celda* obtener(int i);

		//Agrega una Celda a la posicion i
		void agregarPosicion(int i);

		//Libera el espacio de la lista borrando todas las Celdas
		void liberarEspacio();

      //Operador de flujo de salida
      friend ostream & operator <<(ostream &, const Lista &);
};

#endif
