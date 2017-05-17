#include "lista.h"

//Constructor por defecto y con argumentos
Lista::Lista(int tam){
   this->tam = tam;
   inicio = NULL;
}

//Recorre la lista haciendo cout de la info y apunta a siguiente mientras no sea NULL
void Lista::mostrar(){
	Celda * ptr = inicio;

	while (ptr != NULL){
		cout << ptr->obtenerInfo() << "->";
		ptr = ptr->obtenerSiguiente();
	}
	cout << endl << endl;
}

//Retorna tam
int Lista::obtenerLongitud(){
	return tam;
}

//Si la lista esta vacia, llama a agregarInicio, en otro caso reestructura los punteros
void Lista::agregarFinal(double valor){
	Celda *ptr = new Celda(valor);
	Celda *ini = obtenerInicio();

	if (tam == 0) agregarElemento(valor);
	else{
		while (ini->obtenerSiguiente() != NULL){
			ini = ini->obtenerSiguiente();
		}
		ini->setSiguiente(ptr);
		ptr->setSiguiente(NULL);
		++tam;
	}
}

//Busca la penultima Celda para que apunte a NULL y borre la ultima
void Lista::eliminarFinal(){
	Celda *ini = obtenerInicio();

	while (ini->obtenerSiguiente()->obtenerSiguiente() != NULL){
		ini = ini->obtenerSiguiente();
	}
	Celda * copia = new Celda;
	copia = ini;
	copia = copia->obtenerSiguiente();
	ini->setSiguiente(NULL);
	delete copia;
	--tam;
}

//Agrega una Celda al inicio reestructurando los punteros
void Lista::agregarInicio(double valor){
	Celda *ptr = new Celda(valor);

	ptr->setSiguiente(inicio);
	inicio = ptr;
	++tam;
}

//Agrega una Celda al inicio reestructurando los punteros
void Lista::agregarElemento(double valor){
	Celda *ptr = new Celda(valor);

	ptr->setSiguiente(inicio);
	inicio = ptr;
	++tam;
}

//Devuelve una Celda aumentando el puntero siguiente mientras el contador sea menor que i
Celda * Lista::obtener(int i){
	int contador = 0;
	Celda * ptr = inicio;

	while (contador != i){
		++contador;
		ptr = ptr->obtenerSiguiente();
	}
	return ptr;
}

//Agrega una Celda a una posicion concreta de la lista
void Lista::agregarPosicion(int valor){
	Celda * actual;
	Celda * ptr = new Celda(valor);

	actual = inicio;
	for (int i = 1; i < valor; ++i)
		actual = actual->obtenerSiguiente();

	ptr->setSiguiente(actual->obtenerSiguiente());
	actual->setSiguiente(ptr);
	++tam;
}

//Borra toda la lista llamando a eliminarFinal() mientras el tamanio sea mayor que 0
void Lista::liberarEspacio(){
	while (tam < 0){
		eliminarFinal();
	}
}

//Operador de flujo de salida
ostream & operator <<(ostream & output, const Lista & otra){
   output << endl;
   Celda * ptr = otra.inicio;

	while (ptr != NULL){
		output << ptr->obtenerInfo() << "->";
		ptr = ptr->obtenerSiguiente();
	}
	cout << endl << endl;

   return output;
}
