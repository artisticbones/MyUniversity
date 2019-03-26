obj-m += hello.o
obj-m += hello-2.o
obj-m += hello-3.o
obj-m += hello-4.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) clean
