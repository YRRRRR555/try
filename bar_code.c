#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define msglen 125

unsigned char mask;
unsigned char mask_num;
char msg_buffer[100];
char num_buffer[8]; //not use
char barcode_buffer[24];
int k,ii,len,mode;

char msg[15];  //chosen by button push



void bar_code(unsigned char num, unsigned char len){
    int i,j;
    for(i=0; i<len; i++){
        printf("msg = %d\n",num);
        mask_num = 0b10000000;
        for(j=0; j<8;j++){
            barcode_buffer[i*8+j] = ((num & mask_num)>0);
            mask_num = mask_num>>1;
            printf("%d\n",mask_num);
        }
    }
}
int main(){
    int q;
    bar_code(17,3);
       for(q=0; q<24; q++){
        
       printf("index=%d  %d\n",q,barcode_buffer[q]);
    


   }

}