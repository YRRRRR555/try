#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define msglen 125
unsigned char decodeByte
char msg1_buffer[100];
char msg2_buffer[100];
// msg1 = "TEAM 2005";  9
// msg2 = "CLASS_2020"; 10 
char msg[15];  //chosen by button push
int button; //button selecton
int mode;
// char str[55];
// printf("enter any string:");
// scanf("%s",str);
// printf("yout input is %s\n",str);
void selection(int selection){
    if(selection == 1){
         printf("selection is 1\n");
        strcpy(msg,"TEAM 2005");
    }
    else if(selection == 2){
         printf("selection is 2\n");
        strcpy(msg,"CLASS 2020");

    } 
}
int main(){
    int i,j,c;
    printf("enter mode:");
    scanf("%d",&mode);
    selection(mode);
    printf("length = %lu \n", strlen(msg));
    // printf("the message is %s \n",msg);
   for(i = 0; msg[i]!='\0'; i++){
       c = msg[i]; //give a decimal number
       printf("i c = %i\n",c);
       printf("d c = %d\n",c);
   }
};