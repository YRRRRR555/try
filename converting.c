#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define msglen 125

unsigned char mask;
char msg_buffer[100];
int msg_buffer2[100];
int i, j, k, q, ii;
char msg[15] = "TEAM 2005";  //chosen by button push


int main(){
    printf("length = %lu \n", strlen(msg));

    
   for(i=0; i<strlen(msg); i++){
       printf("msg = %d\n", msg[i]);
       mask = 0b10000000;
       for(j=0; j<8; j++){
           msg_buffer[i*8+j] = ((msg[i] & mask)>0);
           mask = mask>>1;
           printf("%d\n",mask);
       }
   }
//    size_t size = sizeof(msg_buffer2);
   printf("\nsize is %zu\n", sizeof(msg_buffer));
//    for(q=0; q<strlen(msg_buffer); q++){
//        ii = msg_buffer[q];
//         if(msg_buffer[q]==0){
//        printf("index=%d  %d\n",q,msg_buffer[q]);
//         }


//    }
};


