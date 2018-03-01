#ifndef _READBMP_H
#define _READBMP_H

#include <OpenGl/gl.h>
#include <GLUT/GLUT.h>
#include <string>
using namespace std;
//static GLint    ImageWidth;
//static GLint    ImageHeight;
//static GLint    PixelLength;
//static GLubyte* PixelData;
#define   WIDTHBYTES(bits) (((bits)+31)/32*4)
#define BI_RGB 0L

typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef int DWORD;
typedef int LONG;

typedef struct mytagBITMAPFILEHEADER
{
WORD bfType;
DWORD bfSize;               
WORD   bfReserved1; 
WORD   bfReserved2; 
DWORD bfOffBits;         
} __attribute__((packed)) myBITMAPFILEHEADER;

typedef struct mytagBITMAPINFOHEADER{

DWORD   biSize;                  
LONG    biWidth;        
LONG    biHeight;       
WORD    biPlanes;        
WORD    biBitCount;      
DWORD   biCompression;          
DWORD   biSizeImage;            
LONG    biXPelsPerMeter;  
LONG    biYPelsPerMeter;   
DWORD   biClrUsed;                 
DWORD   biClrImportant;             
} __attribute__((packed)) myBITMAPINFOHEADER;


typedef struct mytagRGBQUAD { 

BYTE     rgbBlue; 
BYTE     rgbGreen; 
BYTE     rgbRed; 
//BYTE     rgbReserved; 
} myRGBQUAD;
typedef struct tagRGBQUAD2 { 

BYTE     rgbBlue; 
BYTE     rgbGreen; 
BYTE     rgbRed; 
BYTE     rgbReserved; 
} RGBQUAD2;

typedef struct BmpImageInfo { 

myRGBQUAD* dataOfBmp; 
GLint width;
GLint height;
GLint depth;
} BmpImage;
typedef struct BlackPatchindex { 

GLfloat x1;
GLfloat y1;
GLfloat x2;
GLfloat y2;
} Patch;

BmpImage* readbmp(string Filename);
Patch* getpatch(unsigned char *bitmapData,int width, int height);
BmpImage* imcrop(BmpImage* image,int x, int y,int size);

#endif
