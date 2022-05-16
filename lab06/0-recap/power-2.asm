%include "../utils/printf32.asm"

section .text
extern printf
global main
main:
    push ebp
    mov ebp, esp

    mov eax, 729    ; to be broken down into powers of 2
    mov ebx, 1      ; stores the current power

    ; TODO - print the powers of 2 that generate number stored in EAX

repeta:
    PRINTF32 `%d\n\x0`, ebx
    add ebx, ebx
    cmp ebx, eax
    jle repeta



    leave
    ret
