#!/usr/local/bin/zsh
nasm -f macho32 -o main.o main.asm
ld main.o -o main
./main
rm main.o main
