# Metodologia Programacion

## 8 ejercicios de examen de la asignatura MP. Los enunciados:

### EJERCICIO 1:
Se desea resolver el problema del juego de los barquitos, para lo que se precisa el dise˜no de la clase Barquitos que contiene toda la informaci´on necesaria para gestionar el tablero de un jugador. Debe incluir una matriz de enteros que permita codificar el estado del tablero, mediante el uso de memoria dinámica. Se pide:
- definir la estructura de la clase Barquitos
- implementar constructor que recibe como argumento el n´umero de filas y de columnas del tablero. Recordad que la matriz donde se desarrolla el juego se reserva en memoria din´amica
- constructor de copia
- destructor
- m´etodo para comprobar si es posible ubicar un barco en una determinada posici´on. Recibir´a como argumento la fila y columna en que se encuentra, tama˜no del barco (n´umero comprendido entre 1 y 9) y car´acter indicando la colocaci´on horizontal (’H’) o vertical (’V’). El barco puede situarse en la posici´on indicada si las casillas que ocupar´ıa no est´an ya ocupadas por otro barco y est´an dentro del tablero
- operador de asignaci´on

### EJERCICIO 2:
Se desea resolver el problema de sumas de enteros no negativos de gran tama˜no (que exceden la capacidad de representaci´on del tipo int. Para ello se propone crear la clase BigInt que puede almacenar valores enteros de longitud indeterminada.
La clase representar´a un entero mediante un array (de longitud variable) de enteros, reservado en memoria din´amica (donde cada entero representa uno de los d´ıgitos del entero largo a construir y s´olo podr´a tomar valores entre 0 y 9). El almacenamiento se produce de forma que el valor menos significativo se guarda en la posici´on 0 del array. Se pide:
- implementar constructor por defecto (se crea objeto que representa valor 0)
- destructor
- constructor de copia
- m´etodo para sumar dos objetos de la clase BigInt. El resultado ser´a un nuevo objeto de la clase
- operador <<

### EJERCICIO 3:
Se desea crear una clase para poder manejar figuras planas en una aplicaci´on de gr´aficos 2D. Esta clase, de nombre Polilinea se basa en almacenar informaci´on sobre puntos en un espacio bidimensional. La informaci´on sobre los puntos se gestiona con una clase auxiliar de nombre Punto. Las estructuras b´asicas de estas clases es la siguiente:
class Punto {
int x, y;
...
};
class Polilinea {
Punto ∗p; //Array de puntos
int num; //Numero de puntos
...
};
Se pide:
- constructor por defecto (para crear una l´ınea poligonal vac´ıa)
- destructor
- constructor de copia
- m´etodo agregarPunto para a˜nadir un nuevo punto a una polil´ınea
- operador de suma (el resultado ser´a una nueva polil´ınea que contendr´a todos los puntos de los objetos sumado


### EJERCICIO 4:
Dadas las siguientes definiciones de clase:
class Celda {
private:
double info;
Celda ∗sig;
public:
...
};
class Lista {
private:
Celda ∗ contenido;
...
};
donde info es una variable de tipo double y sig es un puntero que apunta a un objeto de tipo Celda. Con esta declaraci´on un objeto de la clase Lista contiene b´asicamente un puntero a un objeto de la clase Celda, que se corresponde con el primer valor que almacena. En base a estas clases se pide:
- constructor por defecto
- destructor
- constructor de copia
- operador <<

### EJERCICIO 5:
Se pretende implementar una clase que permita representar de forma eficiente matrices dispersas, donde s´olo un n´umero relativamente bajo de valores son significativos (distintos de cero). Estos valores significativos son los ´unicos que se almacenan. Cada valor significativo precisa almacenar: fila, columna y valor num´erico que representa (de tipo double). La informaci´on sobre valores significativos se almacena en una clase llamada Valor. Asumiendo que ya se dispone de la clase Valor, la estructura b´asica de la clase a crear para representar matrices dispersas ser´ıa:
class MatrizDispersa {
private:
int nfilas; //numero de filas de la matriz
int ncolumnas; //numero de columnas de la matriz
Valor ∗valores; //Array para almacenar los valores significativos
int numeroValores; //Numero de valores significativos almacenados
public:
...
};
A modo de ejemplo, podemos considerar la siguiente matriz:
1 0 0 0
0 2 0 0
0 0 3 0
0 0 0 4
Un objeto de la clase MatrizDispersa para almacenar esta informaci´on tendr´ıa los siguientes valores de los datos miembro:
- nfilas = 4
- ncolumnas = 4
- numeroV alores = 4 (hay 4 valores significativos, en la diagonal principal en este ejemplo)
- valores contendr´ıa 4 objetos de la clase Valor, con el siguiente contenido:
- fila=1, columna=1, valor=1.0
- fila=2, columna=2, valor=2.0
- fila=3, columna=3, valor=3.0
- fila=4, columna=4, valor=4.0
Se pide:
- constructor por defecto
- destructor
- constructor de copia
- constructor de copia para una matriz determinada. El constructor recibe como argumentos tres arrays: los dos primeros (de tipo int) contienen la informaci´on de filas y columnas (respectivamente) y el tercero contendr´a los valores de tipo double asociados. En el caso de la matriz de ejemplo vista antes, habr´ıa que pasar como argumento al constructor: (1,2,3,4), (1,2,3,4), (1.0,2.0, 3.0, 4.0)
- operador de suma (para realizar la suma puede usarse el m´etodo desarrollado en el ejercicio 2 de los guiones previos)

### EJERCICIO 6:
Se define un Skyline como la silueta urbana que refleja la vista general de los edificios de una ciudad. Se propone crear una clase para gestionar este tipo de vistas, de forma simplificada, donde los edificios no son m´as que un rect´angulo que se eleva desde una l´ınea base horizontal. La silueta puede codificarse guardando los valores de abscisas y alturas de cada cambio de altura.
Se propone la siguiente representaci´on de la clase:
class Skyline {
private:
double ∗abscisas; //array de abscisas
double ∗alturas; //array de alturas (> 0, la ultima sera 0 )
int n; //tam. de los arrays anteriores
public:
...
};
Un objeto representando la informaci´on del ejemplo anterior mostrar´ıa los siguientes valores de sus datos miembro:
- abscisas: 1, 1.5, 2.5, 3, 3.5, 4, 5, 6, 6.5, 7.8
- alturas: 1.5, 2.5, 2.0, 1.5, 1, 2.5, 1.5, 2, 1, 0
- n: 11
Se pide:
- constructor por defecto
- destructor
- constructor espec´ıfico para un edificio: recibe como argumento tres valores que representan dos abscisas (comienzo y final) y la altura del edificio
- constructor de copia
- operador []

### EJERCICIO 7:
Se desea crear un programa para calcular el n´umero de repeticiones en una secuencia de n´umeros enteros. Por ejemplo, en el caso de la secuencia 939324 existen 4 valores distintos, repiti´endose 9 2 veces, 3 se repite 2 veces, 2 aparece una sola vez y 4 ´unicamente 1 vez. Se propone crear la siguiente estructura de clases:
class Pareja {
...
int dato; //valor
int nveces; //numero de repeticiones
...
};
class Precuencias {
private:
Pareja ∗parejas; //array de objetos de la clasePareja
int npares; //numero de objetos almacenados en el array
public:
...
};
Se pide:
- constructor por defecto
- destructor
- constructor de copia
- m´etodo agregarValor que recibe un valor (entero) y lo agrega. Si ya aparece alguna pareja asociada al valor, debe incrementarse su contador. Si no est´a, se incluir´a una nueva pareja
- operadores == y !=

### EJERCICIO 8:
Se desea crear una clase Menu para simplificar el desarrollo de programas que usan men´us en modo texto. Para ello se propone la siguiente representaci´on:
class Menu{
private:
char ∗titulo; //Titulo general del menu
char ∗∗opc; //Cadenas de longitud variable que
//describen cada una de las opciones
int nopc; // Numero de opciones en el menu
public:
...
};
Se pide:
- constructor por defecto
- destructor
- constructor de copia
- m´etodos setTitulo (asigna t´ıtulo al men´u), getNumeroOpciones (recupera el valor de nopc) y agregarOpcion (que agrega una nueva opci´on al objeto)
- operador de asignaci´on
