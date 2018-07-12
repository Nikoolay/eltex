all: main.o plagin/add.o plagin/div.o plagin/mul.o plagin/sub.o
	gcc -o cal main.o plagin/add.o plagin/div.o plagin/mul.o plagin/sub.o
main.o: main.c plagin/calc.h
	gcc -o main.o -c main.c
add.o: plagin/add.c plagin/calc.h
	gcc -o plagin/add.o -c plagin/add.c
div.o: plagin/div.c plagin/calc.h
	gcc -o plagin/div.o -c plagin/div.c
mul.o: plagin/mul.c plagin/calc.h
	gcc -o plagin/mul.o -c plagin/mul.c
sub.o: plagin/sub.c plagin/calc.h
	gcc -o plagin/sub.o -c plagin/sub.c
clear: 
	rm -f plagin/*.o cal main.o
