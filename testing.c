#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
char buffer[20] = "acb";



int main()
{
    int i;
    for(i=0;i<strlen(buffer);i++){
        printf("char = %c\n",buffer[i]);
    }
    // printf("ch = %d, hence an integer\n",ch);
 
    return 0;
}

