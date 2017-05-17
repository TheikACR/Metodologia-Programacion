all: bin/ejercicio7

clean:
	echo "Limpieza archivos y biblioteca"
	rm obj/*

mrproper: clean
	rm bin/*

obj/Precuencias.o:	src/Precuencias.cpp include/Pareja.h
	g++ -c -o obj/Precuencias.o -Iinclude src/Precuencias.cpp

obj/ejercicio7.o:	src/ejercicio7.cpp include/Precuencias.h
	g++ -c -o obj/ejercicio7.o -Iinclude src/ejercicio7.cpp

bin/ejercicio7:	obj/Precuencias.o obj/ejercicio7.o
	g++ -o bin/ejercicio7 obj/ejercicio7.o obj/Precuencias.o
