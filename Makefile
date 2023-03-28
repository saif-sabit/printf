all:
	clear
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
	./a.out

debug:
	clear
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -g *.c
	gdb ./a.out

clean:
	rm -f a.out *.gch