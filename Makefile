all: moverobjeto

brazo.o: brazo.cpp brazo.h
	g++ -c brazo.cpp

moverobjeto.o: moverobjeto.cpp brazo.h
	g++ -c moverobjeto.cpp

moverobjeto: moverobjeto.o brazo.o
	g++ -o moverobjeto moverobjeto.o brazo.o

clean:
	rm -f *.o moverobjeto

test: all
	./moverobjeto

