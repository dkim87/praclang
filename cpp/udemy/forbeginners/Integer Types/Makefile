.PHONY: clean, mrproper
CC = g++
CFLAGS = -g -Wall

all: integerTypes
	./integerTypes

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

integerTypes: integerTypes.o
	$(CC) $(CFLAGS) -o $@ $+

clean:
	rm -f *.o core.*

mrproper: clean
	rm -f integerTypes
