# ssdsim linux support
.PHONY : all clean rebuild  

all: ssd
	
clean:
	rm -f ssd *.o *~
.PHONY: clean

ssd: ssd.o avlTree.o flash.o initialize.o pagemap.o     
	cc -m32 -g -lm -o ssd ssd.o avlTree.o flash.o initialize.o pagemap.o -lm
ssd.o: flash.h initialize.h pagemap.h
	gcc -c -m32 -g -lm ssd.c -lm
flash.o: pagemap.h
	gcc -c -m32 -g -lm flash.c 
initialize.o: avlTree.h pagemap.h
	gcc -c -m32 -g -lm initialize.c -lm 
pagemap.o: initialize.h
	gcc -c -m32 -g -lm pagemap.c -lm
avlTree.o: 
	gcc -c -m32 -g -lm avlTree.c -lm

rebuild : clean all

