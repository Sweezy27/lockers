testpassword: testPassword.o Password.o
	g++ -o testpassword.out testPassword.o Password.o

testPassword.o: testPassword.cpp Password.o
	g++ -c testPassword.cpp

Password.o: Password.cpp Password.h
	g++ -c Password.cpp

clean:
	rm -f *.o *.out