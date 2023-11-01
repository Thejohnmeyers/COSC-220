all: prog
prog: prog.o bar.o foo.o
	g++ -o prog prog.o bar.o foo.o
prog.o: prog.cpp
	g++ -c prog.cpp
bar.o: bar.cpp
	g++ -c bar.cpp
foo.o: foo.cpp
	g++ -c foo.cpp
clean:
	rm *o prog

