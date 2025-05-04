CC = gcc
CFLAGS = -Wall

all: filelocker

filelocker: main.o locker.o logger.o
	$(CC) $(CFLAGS) -o filelocker main.o locker.o logger.o

main.o: main.c locker.h logger.h
	$(CC) $(CFLAGS) -c main.c

locker.o: locker.c locker.h
	$(CC) $(CFLAGS) -c locker.c

logger.o: logger.c logger.h
	$(CC) $(CFLAGS) -c logger.c

clean:
	rm -f *.o filelocker
