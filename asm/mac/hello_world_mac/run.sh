#!/usr/local/bin/zsh
nasm -f macho64 -o main.o main.asm
ld main.o -o main
./main
rm main.o main
