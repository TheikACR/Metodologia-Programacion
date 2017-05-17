all: bin/ejercicio3

clean:
	echo "Limpieza archivos y biblioteca"
	rm obj/*

mrproper: clean
	rm bin/*

obj/Polilinea.o:	src/Polilinea.cpp include/Punto.h
	g++ -c -o obj/Polilinea.o -Iinclude src/Polilinea.cpp

obj/ejercicio3.o:	src/ejercicio3.cpp include/Polilinea.h
	g++ -c -o obj/ejercicio3.o -Iinclude src/ejercicio3.cpp

bin/ejercicio3:	obj/Polilinea.o obj/ejercicio3.o
	g++ -o bin/ejercicio3 obj/ejercicio3.o obj/Polilinea.o
