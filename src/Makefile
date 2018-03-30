c_lang: c_lang.c
	gcc -Ofast c_lang.c -o c_lang

first: first.s
	nasm -f elf64 first.s && gcc first.o -nostartfiles -no-pie -o asm

second: second.s
	nasm -f elf64 second.s -o second.o && ld -s -o asm second.o

