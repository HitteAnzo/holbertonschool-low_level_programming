section .data
    msg db "Hello, World", 0Ah 
    len equ $ - msg

section .bss

section .text
    global _start

_start:
    ; write system call (sys_write)
    mov eax, 4
    mov ebx, 1 ; stdout
    mov ecx, msg
    mov edx, len
    int 0x80

    ; exit system call (sys_exit)
    mov eax, 1
    xor ebx, ebx
    int 0x80
