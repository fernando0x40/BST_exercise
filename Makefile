program: bst.o src/main.c
	gcc src/main.c bin/bst.o -o program

bst.o: include/bst/bst.*
	gcc -c include/bst/bst.c -o bin/bst.o