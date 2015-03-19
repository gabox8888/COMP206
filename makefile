linkedlist : main.o list.o
	gcc -o linkedlist.out main.o list.o
list.o: list.c list.h
	gcc -c list.c list.h	 
