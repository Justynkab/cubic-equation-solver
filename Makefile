# Makefile

CC = gcc
CFLAGS = -Iinclude -Wall -Wextra
SRC = src/main.c src/solver.c
OBJ = $(SRC:.c=.o)
EXEC = cubic_solver

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: all clean