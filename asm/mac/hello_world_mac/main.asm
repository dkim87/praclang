; https://lord.io/blog/2014/assembly-on-osx/
; nasm -f macho64 -o main.o main.asm
; ld main.o -o main
; ./main
  %define SYSCALL_WRITE 0x2000004
  %define SYSCALL_EXIT  0x2000001

global start
start:
  mov rdi, 1
  mov rsi, str
  mov rdx, strlen
  mov rax, SYSCALL_WRITE
  syscall

  mov rax, SYSCALL_EXIT
  mov rdi, 0
  syscall

section .data
str:
  db `Hello, assembly!\n` ; to use escape sequences, use backticks
strlen equ $ - str
