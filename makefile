
CC=gcc
CFLAGS=-Wall -g
TARGET=tictactoe

all: $(TARGET)

$(TARGET): main.o board.o
	$(CC) $(CFLAGS) main.o board.o -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
	rm a.out *.o $(TARGET)
	
