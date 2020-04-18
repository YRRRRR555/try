#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define msglen 125

unsigned char mask;
char msg_buffer[100];

int i, j, k;
char msg[15] = "TEAM 2005";  //chosen by button push



int main(){
    printf("length = %lu \n", strlen(msg));

    
   for(i=0; i<strlen(msg); i++){
       mask = 0x80;
       for(j=0; j<8; j++){
           msg_buffer[i*8+j] = ((msg[i] & mask)>0);
           mask >> 1;
       }
   }
   printf("L=%lu",strlen(msg_buffer));
};


