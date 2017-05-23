        section .text
        global _start

_start:
        mov edx,len             ;message length
        mov ecx,msg             ;message to write
        mov ebx,1               ;file descriptor (stdout)
        mov eax,4               ;system call number (sys_write) ;write this code to stdout. What? msg. how long? len
        int 0x80                ; call kernel

        mov eax,1               ; system call number (sys_exit) ; end the program
        int 0x80                ; call kernel

        section .data
        msg db 'hello, world!', 0xa ; string to be printed
        len equ $ - msg         ; length of the string
