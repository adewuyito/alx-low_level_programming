section .data
    message db 'Hello, Holberton!',0x0A ; Define message string with newline character

section .text
    global main

main:
    ; Write message to stdout
    mov eax, 4       ; System call for write
    mov ebx, 1       ; File descriptor for stdout
    mov ecx, message ; Address of message string
    mov edx, 16      ; Length of message string (without newline)
    int 0x80         ; Call kernel to perform write

    ; Write newline to stdout
    mov eax, 4       ; System call for write
    mov ebx, 1       ; File descriptor for stdout
    mov ecx, 0x0A    ; Address of newline character
    mov edx, 1       ; Length of newline character
    int 0x80         ; Call kernel to perform write

    ; Exit program
    mov eax, 1       ; System call for exit
    xor ebx, ebx     ; Return code 0
    int 0x80         ; Call kernel to exit program

