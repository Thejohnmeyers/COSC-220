all: Labmain
Labmain: Labmain.o Linkedlist.o Node.o
	g++ -o Labmain Labmain.o Linkedlist.o Node.o
Labmain.o: Labmain.cpp
	g++ -c Labmain.cpp
Linkedlist.o: Linkedlist.cpp
	g++ -c Linkedlist.cpp
Node.o: Node.cpp
	g++ -c Node.cpp
clean:
	rm *o Labmain

