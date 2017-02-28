.PHONY: clean, mrproper
CC = g++
CFLAGS = -g -Wall

all: string_input
	./string_input

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

string_input: string_input.o
	$(CC) $(CFLAGS) -o $@ $+

clean:
	rm -f *.o core.*

mrproper: clean
	rm -f string_input
