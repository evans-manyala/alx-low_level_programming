global _start

section .text
_start:
  ; Set the address of the format string in the RDI register.
  mov rdi, format_string

  ; Call the printf function.
  call printf

  ; Exit the program.
  mov rax, 60
  xor rdi, rdi
  syscall

section .data
format_string: db "Hello, Holberton!\n", 0

extern printf
