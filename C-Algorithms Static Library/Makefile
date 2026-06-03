CC = gcc
CFLAGS = -Wall -Iinclude
SRC = src/searching.c src/sorting.c
OBJ = Build/searching.o Build/sorting.o
LIB = Build/libalgolib.a
TEST = test_program

all: $(LIB) $(TEST)

Build/searching.o: src/searching.c
	$(CC) $(CFLAGS) -c src/searching.c -o Build/searching.o

Build/sorting.o: src/sorting.c
	$(CC) $(CFLAGS) -c src/sorting.c -o Build/sorting.o

$(LIB): $(OBJ)
	ar rcs $(LIB) $(OBJ)

$(TEST): test.c $(LIB)
	$(CC) $(CFLAGS) test.c -LBuild -lalgolib -o $(TEST)

clean:
	rm -f Build/*.o Build/*.a $(TEST)