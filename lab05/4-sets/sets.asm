%include "printf32.asm"

section .text
    global main
    extern printf

main:
    ;cele doua multimi se gasesc in eax si ebx
    mov eax, 139
    mov ebx, 169
    PRINTF32 `%u\n\x0`, eax ; afiseaza prima multime
    PRINTF32 `%u\n\x0`, ebx ; afiseaza cea de-a doua multime

    ; TODO1: reuniunea a doua multimi
    mov edx, eax
    or edx,ebx
    PRINTF32 `%u\n\x0`, edx

    ; TODO2: adaugarea unui element in multime
    ; un element este o putere a lui 2, doua sunt a doua puteri
    mov edx, eax
    or edx, 1536
    PRINTF32 `%u\n\x0`, edx

    ; TODO3: intersectia a doua multimi
    mov edx, eax
    and edx,ebx
    PRINTF32 `%u\n\x0`, edx

    ; TODO4: complementul unei multimi
    mov edx, eax
    not edx
    PRINTF32 `%u\n\x0`, edx

    ; TODO5: eliminarea unui element
    mov edx, 1
    shl edx, 7
    not edx
    and edx,eax
    PRINTF32 `%u\n\x0`, edx


    ; TODO6: diferenta de multimi EAX-EBX
    not ebx
    and eax,ebx
    PRINTF32 `%u\n\x0`, eax


    xor eax, eax
    ret
