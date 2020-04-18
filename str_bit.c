#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

char msg1_buffer[100];
char msg2_buffer[100];
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
    // printf("the message is %s \n",msg);
   
};