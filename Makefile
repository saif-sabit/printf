all:
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
	./a.out

clean:
	rm -f a.out