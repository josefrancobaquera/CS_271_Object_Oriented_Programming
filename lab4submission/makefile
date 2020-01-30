all: lab4
lab4: functions4.o lab4.o
	gcc functions4.o lab4.o -o lab4
lab4.o: lab4.c functions4.h
	gcc -c lab4.c
functions4.o: functions4.c functions4.h
	gcc -c functions4.c
clean: rm -rf *.o
