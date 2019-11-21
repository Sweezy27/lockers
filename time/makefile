time: timetest.o STime.o
	g++ -o timetest.out timetest.o STime.o

timetest.o: timetest.cpp STime.o
	g++ -c timetest.cpp

STime.o: STime.cpp STime.h
	g++ -c STime.cpp

clean:
	rm -f *.o *.out