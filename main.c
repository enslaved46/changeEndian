/******************************************************************************

Author :enslaved46
*******************************************************************************/



#include <stdlib.h>
#include<stdio.h>
#include <stdint.h>
#include "changeEndian.h"



int main(void ){	
	
	unsigned char byte;
	unsigned char  *someNum = " 305419896"; // 0x12345678
	unsigned char * pointer ;

	pointer = someNum;

	unsigned int nn = atoi(someNum);

	
	byte =displayFirstEndianByte(&nn);

	printf("Byte Extracted : %x \n", byte);
	
	//(byte == 0x78) ? printf("%s\n", "Big Endian\n") : printf("Lil Endian\n");

    switch (byte)
    {
    	case(0x78):
    	 printf(" System is BIG ENDIAN \n Converting : %x  to Little ENDIAN : %x \n", nn, LitToBigEndian(nn));  	 
    	 break;

    	case(0x12):
    	 printf("%0x\n", BigtoLilEndian(LitToBigEndian(nn)));
    	 break;
	}

	
	while (*pointer){ 		
		byte =   (*((unsigned char * ) pointer ));
		//printf("address : %p value : %c  someNum[i] :%d \n", pointer , byte, nn);
		pointer++;
	}

	printf("NUMER  = %s \n **** Getting Each BYTE  *****\n", someNum);

	for( unsigned int  i =  0 ; i < 4 ; ++i)
		printf("%dth byte : %02x \n", i +1,   (nn >> (i * 8 ) & 0xFF));
	  

	return 0;
}
