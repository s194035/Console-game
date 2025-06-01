CC = gcc
CFLAGS = -Wall -Wextra -g -Isrc -Iinc

main: src/main.o src/console.o src/objects.o
	$(CC) $(CFLAGS) src/main.o src/console.o src/objects.o -o main

src/main.o: src/main.c inc/console.h
	$(CC) $(CFLAGS) -c src/main.c -o src/main.o

src/console.o: src/console.c inc/console.h 
	$(CC) $(CFLAGS) -c src/console.c -o src/console.o

src/objects.o: src/objects.c inc/objects.h
	$(CC) $(CFLAGS) -c src/objects.c -o src/objects.o

clean:
	rm -f main
	rm -f src/*.o main

.PHONY: clean

#-I flag is used to include directories to place where the compiler searches. -I<directory>
#-Iinc tells the compiler to look in the "inc" directory for header files.
#$^ means all prerequisites
#$< means first dependency
#$@ means target name


#Pattern rule
#This rule applies to any .o file in "src".
#The corresponding .c file with the same name is the source
#-c $< only compiles the source file (does not link)
#src/%.o: src/%.c
	#$(CC) $(CFLAGS) -c $< -o $@