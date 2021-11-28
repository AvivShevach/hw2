my_mat.o: my_mat.c my_mat.h
	gcc -c -g my_mat.c -I. -o my_mat.o

libmy_mat.a: my_mat.o
	ar r libmy_mat.a my_mat.o

all: libmy_mat.a
	gcc -g main.c -L. -lmy_mat -o connections

clean:
	rm -rf *.a *.o connections
