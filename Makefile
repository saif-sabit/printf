all:
	clear
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
	./a.out

debug:
	clear
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format -g *.c
	gdb ./a.out

git:
	git add .
	git commit -m "Updates"
	git push

clean:
	rm -f a.out *.gch