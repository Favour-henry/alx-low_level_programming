extern printf

section .text
   global main

main;
   push rpb

   mov rdi,fmt
   mov rsi,msg
   mov rax,0
   call printf

   pop rpb

   mov rax,0
   ret

section.data
msg: do "Hello,Holberton",0
fmt: do "%s", 10, 0
