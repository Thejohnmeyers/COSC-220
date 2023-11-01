all: studentmain
studentmain: studentmain.o studentDlist.o student.o book.o
	g++ -o studentmain studentmain.o studentDlist.o book.o student.o
studentmain.o: studentmain.cpp
	g++ -c studentmain.cpp
studentDlist.o: studentDlist.cpp
	g++ -c studentDlist.cpp
student.o: student.cpp
	g++ -c student.cpp
book.o: book.cpp
	g++ -c book.cpp
clean: 
	rm *o studentmain
