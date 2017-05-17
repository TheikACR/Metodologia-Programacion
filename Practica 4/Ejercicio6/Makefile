all: bin/ejercicio6

clean:
	echo "Limpieza archivos y biblioteca"
	rm obj/*

mrproper: clean
	rm bin/*

obj/Skyline.o:	src/Skyline.cpp include/Skyline.h
	g++ -c -o obj/Skyline.o -Iinclude src/Skyline.cpp

obj/ejercicio6.o: src/ejercicio6.cpp include/Skyline.h
	g++ -c -o obj/ejercicio6.o -Iinclude src/ejercicio6.cpp

bin/ejercicio6:	obj/Skyline.o obj/ejercicio6.o
	g++ -o bin/ejercicio6 obj/ejercicio6.o obj/Skyline.o
