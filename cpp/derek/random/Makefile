.PHONY: clean, mrproper
CC = g++
CFLAGS = -g -Wall

all: random
	./random

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

random: random.o
	$(CC) $(CFLAGS) -o $@ $+

clean:
	rm -f *.o core.*

mrproper: clean
	rm -f random
