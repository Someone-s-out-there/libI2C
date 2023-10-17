

all: lib demo


lib: I2C.c I2C.h
	avr-gcc I2C.c -c -mmcu=atmega328p
	avr-ar -r libi2c.a I2C.o
	ranlib libi2c.a

demo: main.c lib
	avr-gcc main.c -L . -li2c -mmcu=atmega328p -O1 -o out.elf
