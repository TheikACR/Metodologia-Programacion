all: bin/ejercicio5

clean:
	echo "Limpieza archivos y biblioteca"
	rm obj/*

mrproper: clean
	rm bin/*

obj/MatrizDispersa.o:	src/MatrizDispersa.cpp include/Valor.h
	g++ -c -o obj/MatrizDispersa.o -Iinclude src/MatrizDispersa.cpp

obj/ejercicio5.o:	src/ejercicio5.cpp include/MatrizDispersa.h
	g++ -c -o obj/ejercicio5.o -Iinclude src/ejercicio5.cpp

bin/ejercicio5:	obj/MatrizDispersa.o obj/ejercicio5.o
	g++ -o bin/ejercicio5 obj/ejercicio5.o obj/MatrizDispersa.o
