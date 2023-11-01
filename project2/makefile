all: miniDriver
miniDriver: miniDriver.o miniListStack.o miniListQueue.o miniDList.o student.o book.o studentDlist.o miniArrStack.o miniArrQueue.o
	g++ -o miniDriver miniDriver.o miniListStack.o miniListQueue.o miniDList.o student.o book.o studentDlist.o miniArrStack.o miniArrQueue.o
miniDriver.o: miniDriver.cpp
	g++ -c miniDriver.cpp
miniListStack.o: miniListStack.cpp
	g++ -c miniListStack.cpp
miniListQueue.o: miniListQueue.cpp
	g++ -c miniListQueue.cpp
miniDList.o: miniDList.cpp
	g++ -c miniDList.cpp
student.o: student.cpp
	g++ -c student.cpp
book.o: book.cpp
	g++ -c book.cpp
studentDlist.o: studentDlist.cpp
	g++ -c studentDlist.cpp
miniArrStack.o: miniArrStack.cpp
	g++ -c miniArrStack.cpp
miniArrQueue.o: miniArrQueue.cpp
	g++ -c miniArrQueue.cpp
clean:
	rm *o miniDriver
