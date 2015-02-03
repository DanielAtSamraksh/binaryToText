
all: struct

struct: struct.h main.cpp Makefile
	g++ main.cpp -o makeLog
	./makeLog
	./b2t Datum struct.h
