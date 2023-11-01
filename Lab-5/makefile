all: vectorDriver
vectorDriver: vectorDriver.o vectorAux.o
	g++ -o vectorDriver vectorDriver.o vectorAux.o
vectorDriver.o: vectorDriver.cpp
	g++ -c vectorDriver.cpp
vectorAux.o: vectorAux.cpp
	g++ -c vectorAux.cpp
clean:
	rm *o vectorDriver
