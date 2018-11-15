all: pargs.c
	gcc -o a.out pargs.c

run:
	./a.out ls
