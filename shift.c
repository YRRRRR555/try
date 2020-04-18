#include <stdio.h>

int main() {

   unsigned  a = 0b00111101;	/* 60 = 0011 1100 */  
   unsigned b = 13;	/* 13 = 0000 1101 */
//    unsigned int c;
  unsigned c = 0;           

   c = (b & a);       /* 12 = 0000 1100 */ 
   printf("Line 1 - Value of c is %d\n", c );

    c = 0b10000000;       /* 12 = 0000 1100 */ 
   printf("Line 1 - Value of c is %d\n", c );


   c = a | b;       /* 61 = 0011 1101 */
   printf("Line 2 - Value of c is %d\n", c );

   c = a ^ b;       /* 49 = 0011 0001 */
   printf("Line 3 - Value of c is %d\n", c );

   c = ~a;          /*-61 = 1100 0011 */
   printf("Line 4 - Value of c is %d\n", c );

   c = a << 2;     /* 240 = 1111 0000 */
   printf("Line 5 - Value of c is %d\n", c );

   c = a >> 2;     /* 15 = 0000 1111 */
   printf("Line 6 - Value of c is %d\n", c );

    c = a >> 2;     /* 15 = 0000 1111 */
   printf("Line 6 - Value of c is %d\n", c );
}