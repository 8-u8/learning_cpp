gdb -q ./a.out

# Reading symbols from ./a.out...
# (No debugging symbols found in ./a.out)
# (gdb) break main
# Breakpoint 1 at 0x1149
# (gdb) run
# Starting program: /home/t0_u0/Desktop/learning_cpp/sources/hacking-the_art_of_explotation/a.out 

# Breakpoint 1, 0x0000555555555149 in main ()
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
# (gdb) 