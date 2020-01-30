all: lab3
lab3: helperfunctions.o sortingfunctions.o lab3.o 
	gcc helperfunctions.o sortingfunctions.o lab3.o -o lab3
lab3.o: lab3.c helperfunctions.h sortingfunctions.h
	gcc -c lab3.c
sortingfunctions.o: sortingfunctions.c sortingfunctions.h 
	gcc -c sortingfunctions.c 
helperfunctions.o: helperfunctions.c helperfunctions.h 
	gcc -c helperfunctions.c 
clean:
	rm -rf *.o
