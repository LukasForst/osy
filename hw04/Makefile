NSD_O=nd.o nsd.o nsd_main.o
FORK_O=forkpipe.o
CC=gcc
CFLAGS=-g -Wall -Iinclude

bin: nsd forkpipe

run: bin
	./forkpipe

nsd: $(NSD_O)
	$(CC) -o $@ $(NSD_O)

forkpipe: $(FORK_O)
	$(CC) -o $@ $(FORK_O)

%.o: %.c
	$(CC) -o $@ -c $(CFLAGS) $<

nd.o: nd.c nd.h
	$(CC) -o $@ -c $(CFLAGS) $<
nsd.o: nsd.c nsd.h
	$(CC) -o $@ -c $(CFLAGS) $<

clean:
	rm $(NSD_O)
	rm $(FORK_O)
	rm nsd forkpipe

tar: bin
	make clean
	tar czf osy04.tgz Makefile *.[ch]