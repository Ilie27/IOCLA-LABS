%include "printf32.asm"

section .text
    global main
    extern printf

main:
    ;cele doua numere se gasesc in eax si ebx
    mov eax, 2
    mov ebx, 7
    ; TODO: aflati minimul
    cmp eax,ebx
    jl min
    xchg eax,ebx
min:
    PRINTF32 `%d\n\x0`, eax ; afiseaza minimul

    ret
