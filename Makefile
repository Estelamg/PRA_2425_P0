brazo.o: brazo.cpp brazo.h
	g++ -c brazo.cpp

moverobjeto.o: moverobjeto.cpp brazo.h
	g++ -c moverobjeto.cpp

MoverObjeto: moverobjeto.o brazo.o
	g++ -o MoverObjeto moverobjeto.o brazo.o

all: MoverObjeto

clean:
	rm -f *.o MoverObjeto

test: all
	./MoverObjeto

