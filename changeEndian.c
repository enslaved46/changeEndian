/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/





#include "changeEndian.h"
#include "types.h"

char  displayFirstEndianByte(void * data){
	//printf(" from fun : %s\n",data);
        unsigned char byte = *(unsigned char*) data;
	return byte;
}


unsigned int LitToBigEndian(unsigned int x)
{
	return (((x>>24) & 0x000000ff) | ((x>>8) & 0x0000ff00) | ((x<<8) & 0x00ff0000) | ((x<<24) & 0xff000000));
}





