%: %.c
	clang -ggdb -O2 -std=c11 -Wall -Werror $< -lcs50 -lm -o $@
hello: hello.c
	clang -ggdb -O2 -Wall -Werror hello.c -lcs50 -o hello
clean:
	rm -f hello
