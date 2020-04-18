#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define msglen 125

unsigned char mask;
char msg_buffer[100];
int msg_buffer2[100];
int i, j, k, q;
char msg[15] = "TEAM 2005";  //chosen by button push


int main(){
    printf("length = %lu \n", strlen(msg));

    mask = 0b10000000;
   for(i=0; i<strlen(msg); i++){
       printf("msg = %d\n", msg[i]);
       
      
        mask = mask>>1;
        printf("%d\n",mask);
       }
   }
//    size_t size = sizeof(msg_buffer2);
//    printf("\narray's size is %zu\n", size);
//    for(q=0; q<size; q++){
//        printf("%d\n",q,msg_buffer2[q]);
//    }



