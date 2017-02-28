.PHONY: clean, mrproper
CC = gcc
CFLAGS = -g -Wall

all: manual_pointer_assign
	./manual_pointer_assign

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

manual_pointer_assign: manual_pointer_assign.o
	$(CC) $(CFLAGS) -o $@ $+

clean:
	rm -f *.o core.*

mrproper: clean
	rm -f manual_pointer_assign
