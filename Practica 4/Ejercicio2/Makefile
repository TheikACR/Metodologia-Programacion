all: bin/ejercicio2

clean:
	echo "Limpieza archivos y biblioteca"
	rm obj/*

mrproper: clean
	rm bin/*

obj/BigInt.o:	src/BigInt.cpp include/BigInt.h
	g++ -c -o obj/BigInt.o -Iinclude src/BigInt.cpp

obj/ejercicio2.o: src/ejercicio2.cpp include/BigInt.h
	g++ -c -o obj/ejercicio2.o -Iinclude src/ejercicio2.cpp

bin/ejercicio2:	obj/BigInt.o obj/ejercicio2.o
	g++ -o bin/ejercicio2 obj/ejercicio2.o obj/BigInt.o
