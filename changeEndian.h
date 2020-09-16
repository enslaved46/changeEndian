/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#ifndef CHANGE_ENDIAN_H
#define CHANGE_ENDIAN_H

#include "types.h"


#define MASKBIT(x) ((unsigned char) (1<< x))

#define MASKBYTE(x) (unsigned int) ( 0XFF << (8*x))

char displayFirstEndianByte(void * data);
unsigned int LitToBigEndian(unsigned int x);
unsigned int BigtoLilEndian(unsigned int x);

#endif
