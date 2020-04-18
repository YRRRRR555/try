#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define msglen 125

unsigned char mask;
char msg_buffer[100];
int i, j, k, q, ii,len,mode;
char msg[15] = "TEAM 2005";  //chosen by button push

// void check_length(b){
//     int a, count;
//     count = 0;
//     for(a=0; a<sizeof(b); a++){
//         count++;
//     }
//     return count;
// }


void selection(int selection){
    
    if(selection == 1){
         printf("selection is 1\n");
        strcpy(msg,"TEAM 2005");
        len=strlen(msg);
    }
    else if(selection == 2){
         printf("selection is 2\n");
        strcpy(msg,"CLASS 2020");
        len=strlen(msg);

    } 
}


int main(){
    printf("enter mode:");
    scanf("%d",&mode);
    selection(mode);
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

//    printf("\nsize is %zu\n", ii);
   for(q=0; q<(len*8); q++){
        
       printf("index=%d  %d\n",q,msg_buffer[q]);
    


   }
};


