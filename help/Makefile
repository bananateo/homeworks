all: main.exe


sup.o: sup.c sup.h
	gcc -c sup.c -o sup.o


main.exe: main.c sup.o
	gcc main.c sup.o -o main.exe
	./main.exe

	
clean:
	del *.o *.exe