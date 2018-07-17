sprav: main.o sprav.o
	gcc -o sprav main.o sprav.o -g
main.o: main.c sprav.h
	gcc -c main.c
sprav.o: sprav.c sprav.h
	gcc -c sprav.c
clear:
	rm -f sprav main.o sprav.o
