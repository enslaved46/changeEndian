/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/



#include <stdlib.h>
#include<stdio.h>
#include <stdint.h>
#include "changeEndian.h"
#include "types.h"



extern unsigned int LitToBigEndian(unsigned int x);
int main(void ){	
	unsigned char byte;
	unsigned char * someNum = "12345678";

	int nn = atoi(someNum);
	
	byte =displayFirstEndianByte(&nn);
	//unsigned char byte = displayFirstEndianByte(someNum);;
	
	//byte = (char ) nn; 
	printf("byte extracted : %d\n", byte);
	
	(byte == 0x4E) ? printf("Big Endian\n") : printf("Lil Endian\n");
	
	while (*someNum){ 		
		byte =   (*((unsigned char * ) someNum ));
		printf("\t address : %p value : %c  someNum[i] :%d \n ", someNum , byte, nn);
		someNum++;
	}
	

	return 0;
}

  
