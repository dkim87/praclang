.PHONY: clean, mrproper
CC = gcc
CFLAGS = -g -Wall

all: print_bytes
	./print_bytes

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

print_bytes: print_bytes.o
	$(CC) $(CFLAGS) -o $@ $+

clean:
	rm -f *.o core.*

mrproper: clean
	rm -f print_bytes
