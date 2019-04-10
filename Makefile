CC=arm-linux-gnueabihf-gcc
#CC=gcc

main: main.c
	@$(CC) -o helloworld main.c

clean:
	@rm -rf helloworld

.PHONY: clean

