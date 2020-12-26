/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main(void) {
  unsigned char X=0x00, Y=0x00, Z=0x01;
  unsigned char F;
  unsigned char one=0x01;

  F= (X|Y|Z) & (X|(~Y)|(~Z)) & (X|Y|(~Z)) & ((~X)|(Y)|(~Z));

  printf("X=%x Y=%x Z=%x F=%x",X,Y,Z,(F & one));
  return 0;
}

