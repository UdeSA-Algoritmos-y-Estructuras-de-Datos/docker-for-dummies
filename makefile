main:
	gcc -g -std=c99 -Wall -Wconversion -Wno-sign-conversion -Werror -o malloc-example *.c
	./malloc-example
	valgrind ./malloc-example
	rm malloc-example