
teststate: testState.o statefactory.o lockerstate.o statename.o blockstate.o emptystate.o expiredstate.o fullstate.o
	g++ -o teststate.out testState.o statefactory.o lockerstate.o statename.o blockstate.o emptystate.o expiredstate.o fullstate.o

testState.o: testState.cpp statefactory.o lockerstate.o statename.o blockstate.o emptystate.o expiredstate.o fullstate.o
	g++ -c testState.cpp

statefactory.o: StateFactory.cpp StateFactory.h lockerstate.o statename.o blockstate.o emptystate.o expiredstate.o fullstate.o
	g++ -c StateFactory.cpp

lockerstate.o: LockerState.cpp LockerState.cpp
	g++ -c LockerState.cpp

statename.o: StateName.cpp StateName.h
	g++ -c StateName.cpp 

blockstate.o: BlockState.cpp BlockState.h
	g++ -c BlockState.cpp

emptystate.o: EmptyState.cpp EmptyState.h
	g++ -c EmptyState.cpp 

expiredstate.o: ExpiredState.cpp ExpiredState.h
	g++ -c ExpiredState.cpp

fullstate.o: FullState.cpp FullState.h
	g++ -c FullState.cpp

testlocker: lockertest.o locker.o statefactory.o lockerstate.o statename.o blockstate.o emptystate.o expiredstate.o fullstate.o
	g++ -o testlocker.out lockertest.o locker.o statefactory.o lockerstate.o statename.o blockstate.o emptystate.o expiredstate.o fullstate.o

lockertest.o: LockerTest.cpp locker.o statefactory.o lockerstate.o statename.o blockstate.o emptystate.o expiredstate.o fullstate.o
	g++ -c LockerTest.cpp

locker.o: Locker.cpp Locker.h statefactory.o lockerstate.o statename.o blockstate.o emptystate.o expiredstate.o fullstate.o
	g++ -c Locker.cpp
clean:
	rm -f *.o *.out