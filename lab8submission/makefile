all: Lab8
Lab8: Lab8.o Package.o TwoDayPackage.o
	g++ Lab8.o Package.o TwoDayPackage.o -o Lab8
Lab8.o: Lab8.cpp Package.h TwoDayPackage.h
	g++ -c Lab8.cpp
Package.o: Package.cpp Package.h
	g++ -c Package.cpp
TwoDayPackage.o: TwoDayPackage.cpp TwoDayPackage.h
	g++ -c TwoDayPackage.cpp
clean:  
	rm -rf *.o
