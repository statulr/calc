CC=gcc
CFLAGS=-Wall
LDFLAGS=-lncurses
TARGET=calc
PREFIX=/usr/local/bin

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(TARGET) $(TARGET).c

install: $(TARGET)
	cp $(TARGET) $(PREFIX)

clean:
	rm -f $(TARGET)