
testmessage: testmessage.o message.o twilio.o
	g++ -o testmessage.out testmessage.o message.o twilio.o -lcurl

testmessage.o: testMessage.cpp message.o twilio.o
	g++ -c testMessage.cpp

message.o: Message.cpp Message.h twilio.o
	g++ -c Message.cpp

twilio.o: twilio.cc twilio.hh type_conversion.hh
	g++ -c twilio.cc

clean:
	rm -f *.o *.out
