.PHONY: clean, mrproper
CC = g++
CFLAGS = -g -Wall

all: floating_point_types
	./floating_point_types

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

floating_point_types: floating_point_types.o
	$(CC) $(CFLAGS) -o $@ $+

clean:
	rm -f *.o core.*

mrproper: clean
	rm -f floating_point_types
