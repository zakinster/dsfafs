all: handler

handler: handler.o 
	g++ -o handler handler.o

handler.o: handler.cpp
	g++ -o handler.o -c handler.cpp

clean:
	rm -rf *.o

mrproper: clean
	rm -rf handler

install:
	cp handler /usr/lib/cgi-bin/
