
# Makefile for building the C wallet 

CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = bin/cwallet
SRC = src/main.c src/cli.c src/help_handler.c src/wallet_handler.c

all: build

build: $(SRC) | bin
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

bin:
	mkdir -p bin

clean:
	rm -f $(TARGET)
