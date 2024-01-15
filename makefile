CC = gcc
CFLAGS = -Wall

SRC_DIR = src

SRC = $(SRC_DIR)/main.c $(SRC_DIR)/controle.c $(SRC_DIR)/arithmetic_operations.c $(SRC_DIR)/logical_operations.c $(SRC_DIR)/memory_operations.c

OBJ = $(SRC:$(SRC_DIR)/%.c=%.o)

TARGET = main

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ): %.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)