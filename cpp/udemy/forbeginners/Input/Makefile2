.PHONY: clean, mrproper
CC = g++
CFLAGS = -g -Wall

all: input
	./input

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

input: input.o
	$(CC) $(CFLAGS) -o $@ $+

clean:
	rm -f *.o core.*

mrproper: clean
	rm -f input
