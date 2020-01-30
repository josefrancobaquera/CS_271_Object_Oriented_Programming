all: lab5
lab5: BankAccount.o lab5.o
	g++ BankAccount.o lab5.o -o lab5
lab5.o: lab5.cpp BankAccount.h
	g++ -c lab5.cpp
BankAccount.o: BankAccount.cpp BankAccount.h
	g++ -c BankAccount.cpp
clean:
	rm -rf *.o
