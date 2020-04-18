#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

char msg1_buffer[100];
char msg2_buffer[100];
char msg1[10] = "TEAM 2005";
char msg2[10] = "CLASS_2020";
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
    int i,j,k;
    printf("enter mode:");
    scanf("%d",&mode);
    selection(mode);
    // printf("length = %lu \n", strlen(msg));
    // printf("the message is %s \n",msg);
   
};