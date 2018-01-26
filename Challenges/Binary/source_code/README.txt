These need to be complied as 32bit Linux ELF binaries, with stack protection and ASLR 
disabled

To compile each binary with this command:
gcc -m32 <file.c> -fno-stack-protector

To disable ASLR, add the following file and command:
file:
/etc/sysctl.d/01-disable-aslr.conf

command: 
kernel.randomize_va_space = 0
