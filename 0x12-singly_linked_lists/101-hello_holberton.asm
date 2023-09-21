section .data
    msg db 'Hello, Holberton', 0
    fmt db '%s', 10, 0

section .text
    global main
    extern printf

main:
    ; Function prologue
    push rbp

    ; Prepare arguments for printf
    mov rdi, fmt
    mov rsi, msg
    xor rax, rax

    ; Call printf
    call printf

    ; Function epilogue
    pop rbp

    ; Return from main
    mov eax, 0x60
    xor edi, edi
    syscall

