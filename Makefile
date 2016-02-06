obj-m += hello-1/hello1.o
obj-m += hello-2/hello2.o
obj-m += hello-3/hello3.o

all:
	make -C /lib/modules/3.16.0-4-amd64/build M=$(PWD) modules

clean:
	make -C /lib/modules/3.16.0-4-amd64/build M=$(PWD) clean
