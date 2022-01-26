CC=g++
CFLAGS=-std=c++11 -g -Wall 

all: weekday.o weekday

weekday.o: weekday.cpp weekday.h
	$(CC) $(CFLAGS) -c weekday.cpp

weekday: weekday.o
	$(CC) $(CFLAGS) -o weekday weekday.o

clean:
	rm *.o *.exe *.stackdump holidays weekday