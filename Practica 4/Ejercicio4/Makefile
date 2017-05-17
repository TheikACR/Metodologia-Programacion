all: bin/ejercicio4

clean:
	echo "Limpieza archivos y biblioteca"
	rm obj/*

mrproper: clean
	rm bin/*

obj/celda.o:	src/celda.cpp include/celda.h
	g++ -c -o obj/celda.o -Iinclude src/celda.cpp

obj/lista.o:	src/lista.cpp include/lista.h include/celda.h
	g++ -c -o obj/lista.o -Iinclude src/lista.cpp

lib/libformas.a:	obj/celda.o obj/lista.o
	ar rsv lib/libformas.a obj/celda.o obj/lista.o

obj/ejercicio4.o:	src/ejercicio4.cpp include/celda.h	include/lista.h
	g++ -c -o obj/ejercicio4.o -Iinclude src/ejercicio4.cpp

bin/ejercicio4:	obj/ejercicio4.o	lib/libformas.a
	g++ -Llib/ -o bin/ejercicio4 obj/ejercicio4.o -lformas
