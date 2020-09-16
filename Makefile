#target : Dependencies
	#action

output: main.o changeEndian.c 
	gcc main.c changeEndian.c -o output

main.o: main.c
	gcc -c main.c

changeEndian.o: changeEndian.c changeEndian.h types.h
	gcc -c changeEndian.c changeEndian.h types.h

clean:
	rm *.o output
	