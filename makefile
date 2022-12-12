CC = gcc
FLAGS = -Wall -g
AR = ar


all: connection
#maindloop maindrec loops


# make main programs
connection: main.o lib_mat.a
	$(CC) $(FLAGS) -o connection main.o lib_mat.a -lm

lib_mat.a: my_mat.o
	$(AR) -rcs lib_mat.a my_mat.o

# make for basic files of the programs
main.o: main.c
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c -lm


.PHONY: all clear

clean:
	rm -f *.o *.a *.so connection