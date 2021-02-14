gcc -g firstprog.c
ls -l a.out
gdb -q ./a.out

# Reading symbols from ./a.out...
# (gdb) break main
# Breakpoint 1 at 0x1149: file firstprog.c, line 3.
# (gdb) run
# Starting program: /home/t0_u0/Desktop/learning_cpp/sources/hacking-the_art_of_explotation/a.out 

# Breakpoint 1, main () at firstprog.c:3
# 3       int main(){
# (gdb) info regisers
# Undefined info command: "regisers".  Try "help info".
# (gdb) info registers
# rax            0x555555555149      93824992235849
# rbx            0x555555555180      93824992235904
# rcx            0x555555555180      93824992235904
# rdx            0x7fffffffdc28      140737488346152
# rsi            0x7fffffffdc18      140737488346136
# rdi            0x1                 1
# rbp            0x0                 0x0
# rsp            0x7fffffffdb28      0x7fffffffdb28
# r8             0x0                 0
# r9             0x7ffff7fe0d50      140737354009936
# r10            0x7                 7
# r11            0x2                 2
# r12            0x555555555060      93824992235616
# r13            0x7fffffffdc10      140737488346128
# r14            0x0                 0
# r15            0x0                 0
# rip            0x555555555149      0x555555555149 <main>
# eflags         0x246               [ PF ZF IF ]
# cs             0x33                51
# ss             0x2b                43
# ds             0x0                 0
# es             0x0                 0
# fs             0x0                 0
# gs             0x0                 0
# (gdb) quit
# A debugging session is active.

#         Inferior 1 [process 219947] will be killed.
# -rwxrwxr-x 1 t0_u0 t0_u0 19280  2月 13 18:07 a.out
# Reading symbols from ./a.out...
# (gdb) list
# 1       #include <stdio.h>
# 2
# 3       int main(){
# 4           int i;
# 5           for (i = 0; i < 10; i++){
# 6               printf("Hello, world!\n");
# 7           }
# 8           return 0; //tell the OS that program finished successfully.
# 9       }
# (gdb) disassemble main
# Dump of assembler code for function main:
#    0x0000000000001149 <+0>:     endbr64 
#    0x000000000000114d <+4>:     push   rbp
#    0x000000000000114e <+5>:     mov    rbp,rsp
#    0x0000000000001151 <+8>:     sub    rsp,0x10
#    0x0000000000001155 <+12>:    mov    DWORD PTR [rbp-0x4],0x0
#    0x000000000000115c <+19>:    jmp    0x116e <main+37>
#    0x000000000000115e <+21>:    lea    rdi,[rip+0xe9f]        # 0x2004
#    0x0000000000001165 <+28>:    call   0x1050 <puts@plt>
#    0x000000000000116a <+33>:    add    DWORD PTR [rbp-0x4],0x1
#    0x000000000000116e <+37>:    cmp    DWORD PTR [rbp-0x4],0x9
#    0x0000000000001172 <+41>:    jle    0x115e <main+21>
#    0x0000000000001174 <+43>:    mov    eax,0x0
#    0x0000000000001179 <+48>:    leave  
#    0x000000000000117a <+49>:    ret    
# End of assembler dump.
# (gdb) 