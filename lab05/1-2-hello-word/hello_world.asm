%include "printf32.asm"

section .data
    myString: db "Hello, World!", 0
    myString2: db "Goodbye, World!", 0

section .text
    global main
    extern printf

main:
    mov ecx, 8                      ; N = valoarea registrului ecx
    mov eax, 27
    mov ebx, 22
    cmp eax, ebx
    jg print                       ; TODO1: eax > ebx?
    ret

print:
    repeta:
    PRINTF32 `%s\n\x0`, myString   ; TODO2.2: afisati "Hello, World!" de N ori
    loop repeta
    PRINTF32 `%s\n\x0`, myString2    ; TODO2.1: afisati "Goodbye, World!"

    ret
