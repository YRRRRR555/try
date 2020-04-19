#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

unsigned char mask;
char msg1_buffer[100];
char msg2_buffer[100];
char msg_buffer[100];
// msg1 = "TEAM 2005";  9
// msg2 = "CLASS_2020"; 10 
char msg[15];  //chosen by button push
int button; //button selecton
int len,mode;
// char str[55];
// printf("enter any string:");
// scanf("%s",str);
// printf("yout input is %s\n",str);
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
    printf("length = %d \n", len);

        int i,j;
    
   for(i=0; i<strlen(msg); i++){
       printf("msg = %d\n", msg[i]);
       mask = 0b10000000;
       for(j=0; j<8; j++){
           msg_buffer[i*8+j] = ((msg[i] & mask)>0);
           mask = mask>>1;
           printf("%d\n",mask);
       }
   }
    // printf("the message is %s \n",msg);
   
};