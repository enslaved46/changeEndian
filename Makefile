#target : Dependencies
	#action

output: main.o changeEndian.o 
	gcc main.o changeEndian.o  -o output

main.o: main.c
	gcc -c main.c

types.o : type.h
	gcc -c type.h 

changeEndian.o:  types.h changeEndian.c changeEndian.h 
	gcc -c changeEndian.c


clean:
	rm *.o output
