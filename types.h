#ifndef TYPE_H
#define TYPE_H

typedef  unsigned int u8;
typedef unsigned long  u32;     /* unsigned 32-bit integer */

typedef struct
{
 u8 lsb0; //least signfigicant byte
 u8 lsb1;
 u8 lsb2;
 u8 lsb3;  //most significant byte;  
}littleEndianSize_t;


typedef union
{
  littleEndianSize_t eachByte;    
  u32 allBytes;    
}littleEndianSize_u;

typedef struct
{
 u8 msb3; //most signfigicant byte
 u8 msb2;
 u8 msb1;
 u8 msb0;  //least significant byte;
     
}bigEndianSize_t;

typedef union
{
  bigEndianSize_t eachByte;    
  u32 allBytes;    
}bigEndianSize_u;

typedef struct
{
    u8 parameter_id;
    u8 device_id;
    bigEndianSize_u sizeBytes;
}stBinaryFileFormat_t;

#endif
