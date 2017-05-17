all: bin/ejercicio1

clean:
	echo "Limpieza archivos y biblioteca"
	rm obj/*

mrproper: clean
	rm bin/*

obj/Barquitos.o:	src/Barquitos.cpp include/Barquitos.h
	g++ -c -o obj/Barquitos.o -Iinclude src/Barquitos.cpp

obj/ejercicio1.o: src/ejercicio1.cpp include/Barquitos.h
	g++ -c -o obj/ejercicio1.o -Iinclude src/ejercicio1.cpp

bin/ejercicio1:	obj/Barquitos.o obj/ejercicio1.o
	g++ -o bin/ejercicio1 obj/ejercicio1.o obj/Barquitos.o
