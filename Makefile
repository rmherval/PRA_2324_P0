ALL: BrazoRobotico

BrazoRobotico: main.o BrazoRobotico.o
	g++ -o BrazoRobotico main.o BrazoRobotico.o
main.o:    BrazoRobotico.h //codigo objeto depende de las cabeceras
	g++ main.cpp

BrazoRobotico.o: BrazoRobotico.h
	g++ BrazoRobotico.cpp

test: ./BrazoRobotico

clean:
	rm *~ *.o


