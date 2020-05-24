/*

File: newmain.c
Author: Nikhil Thakkar
*
Created on 21 May, 2020, 11:39 AM
*/
#include <xc.h>

void main(void) {
 
 
int x=0;
++x;
 
__asm__("NOP");
__asm__("NOP");
__asm__("NOP");
__asm__("NOP");
 
while(1)

{ __asm__("NOP"); }
 
return;
}