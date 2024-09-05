
# Makefile for building the C wallet 

CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = cwallet
SRC = main.c cli.c help_handler.c wallet_handler.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
