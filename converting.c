#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define msglen 125

unsigned char mask;
unsigned char mask_num;
char msg_buffer[100];
char num_buffer[8];
int k, q, ii,len,mode;
char msg[15] = "TEAM 2005";  //chosen by button push

// void check_length(b){
//     int a, count;
//     count = 0;
//     for(a=0; a<sizeof(b); a++){
//         count++;
//     }
//     return count;
// }

void dec_to_bit(unsigned char num){
  int i;
    mask_num = 0b10000000;
    for(i=0; i<8;i++){
        num_buffer[i] = ((num & mask_num)>0);
        mask_num = mask_num>>1;
        printf("%d\n",mask_num);
    }
}



int main(){
    printf("length = %lu \n", strlen(msg));
    int i,j;
    len=strlen(msg);
    
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
//    printf("\nsize is %zu\n", ii);

   for(q=0; q<(len*8); q++){
       printf("index=%d  %d\n",q,msg_buffer[q]);
   }
};


