all: bin/ejercicio8

clean:
	echo "Limpieza archivos y biblioteca"
	rm obj/*

mrproper: clean
	rm bin/*

obj/Menu.o:	src/Menu.cpp include/Menu.h
	g++ -c -o obj/Menu.o -Iinclude src/Menu.cpp

obj/ejercicio8.o: src/ejercicio8.cpp include/Menu.h
	g++ -c -o obj/ejercicio8.o -Iinclude src/ejercicio8.cpp

bin/ejercicio8:	obj/Menu.o obj/ejercicio8.o
	g++ -o bin/ejercicio8 obj/ejercicio8.o obj/Menu.o
