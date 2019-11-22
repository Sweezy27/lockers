
teststate: testState.o StateFactory.o LockerState.o StateName.o BlockState.o EmptyState.o ExpiredState.o FullState.o
	g++ -o teststate.out testState.o StateFactory.o LockerState.o StateName.o BlockState.o EmptyState.o ExpiredState.o FullState.o

testState.o: testState.cpp StateFactory.o LockerState.o StateName.o BlockState.o EmptyState.o ExpiredState.o FullState.o
	g++ -c testState.cpp

StateFactory.o: StateFactory.cpp StateFactory.h LockerState.o StateName.o BlockState.o EmptyState.o ExpiredState.o FullState.o
	g++ -c StateFactory.cpp

LockerState.o: LockerState.cpp LockerState.cpp
	g++ -c LockerState.cpp

StateName.o: StateName.cpp StateName.h
	g++ -c StateName.cpp 

BlockState.o: BlockState.cpp BlockState.h
	g++ -c BlockState.cpp

EmptyState.o: EmptyState.cpp EmptyState.h
	g++ -c EmptyState.cpp 

ExpiredState.o: ExpiredState.cpp ExpiredState.h
	g++ -c ExpiredState.cpp

FullState.o: FullState.cpp FullState.h
	g++ -c FullState.cpp

testlocker: LockerTest.o Locker.o StateFactory.o LockerState.o StateName.o BlockState.o EmptyState.o ExpiredState.o FullState.o
	g++ -o testlocker.out lockertest.o locker.o statefactory.o lockerstate.o statename.o blockstate.o emptystate.o expiredstate.o fullstate.o

LockerTest.o: LockerTest.cpp locker.o statefactory.o lockerstate.o statename.o blockstate.o emptystate.o expiredstate.o fullstate.o
	g++ -c LockerTest.cpp

Locker.o: Locker.cpp Locker.h statefactory.o lockerstate.o statename.o blockstate.o emptystate.o expiredstate.o fullstate.o
	g++ -c Locker.cpp
clean:
	rm -f *.o *.out