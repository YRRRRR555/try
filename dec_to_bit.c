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
    int q;
    for(q=0; q<8; q++){
    printf("index=%d  %d\n",q,num_buffer[q]);   
    }
}
