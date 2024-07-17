section .data
    msg db "Hello, World", 0Ah
    len equ $ - msg

section .bss

section .text
    global _start

_start:
    ; write system call (sys_write)
    mov rax, 1
    mov rdi, 1 ; stdout
    mov rsi, msg
    mov rdx, len
    syscall

    ; exit system call (sys_exit)
    mov rax, 60
    xor rdi, rdi
    syscall