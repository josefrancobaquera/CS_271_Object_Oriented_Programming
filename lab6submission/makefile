all: Calendar
Calendar: Time.o Date.o Calendar.o
	g++ Time.o Date.o Calendar.o -o Calendar
Calendar.o: Calendar.cpp Time.h Date.h
	g++ -c Calendar.cpp
Time.o: Time.cpp Time.h
	g++ -c Time.cpp
Date.o: Date.cpp Date.h
	g++ -c Date.cpp
clean:
	rm -rf *.o
