CC=g++
CFLAGS=-std=c++11 -g -Wall 

all: holidays

weekday.o: weekday.cpp weekday.h
	$(CC) $(CFLAGS) -c weekday.cpp

holidays: holidays.cpp weekday.o
	$(CC) $(CFLAGS) -o holidays weekday.o holidays.cpp

clean:
	rm *.o *.exe *.stackdump holidays weekday