#ifndef CELDA_H
#define CELDA_H

#include <iostream>
#include <cstdlib>
using namespace std;

class Celda{
	private:
		double info;
		Celda * siguiente;

	public:
		//Constructor por defecto
		Celda(){
			info = 0;
			siguiente = NULL;
		}

		//Constructor con el valor de info
		Celda(double i){
			info = i;
			siguiente = NULL; 
		}
		
		//Retorno del valor privado info
		int obtenerInfo(){
			return info;
		}

		//Retorno del puntero a una Celda privada siguiente
		Celda * obtenerSiguiente(){
			return siguiente;
		}

		//Asignacion del valor privado info
		void setInfo(double valor){
			info = valor;
		}

		//Asignacion del puntero a la Celda privada siguiente
		void setSiguiente(Celda * sig){
			siguiente = sig;
		}

		//Muestra por pantalla la info de una Celda
		void mostrar();
};

#endif
