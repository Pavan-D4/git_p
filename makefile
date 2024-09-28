CC = gcc
CFLAGS = -Wall -g
TARGET = myprogram

# Source files
SRCS = main.c big3.c fctorial.c reverse.c

# Object files
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

