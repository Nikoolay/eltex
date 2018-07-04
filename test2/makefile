main.o: main.c
	gcc -c -o main.o main.c
fan.o: fan.c
	gcc -c -o fan.o fan.c
fan: main.o fan.o
	gcc -o fan main.o fan.o

clean: 
	rm main.o fan.o 
