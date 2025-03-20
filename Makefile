TARGET = build/result
CC = gcc
FILES = main.c lib/mathlib.c
$(TARGET): main.c
	$(CC) $(FILES) -o $(TARGET)