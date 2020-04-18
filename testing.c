#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
char * stringToBinary( char * s )
{   
    // Variables.
    char * aux, *binary, mask;
    int size, i, y;

    if(s == NULL){
        // If arg is null, nothing to do.
        return NULL;
    }

    // Calculate the size of the str.
    size= strlen(s);
    // alloc the str that contain the answer.
    binary= malloc( (size*8)+1 );
    // If no memory, nothing to do.
    if( binary == NULL ){
        // No memory
        return NULL;
    }

    // save a copy of the arg.
    aux= s;
    // for each char in the str arg.
    for( i=0; i<size; i++ ){
        // In each char to examinate, reset the mask.
        mask= 0x0001;
        // For each bit of a char.
        for( y=0; y<8; y++ ){
            // Compare each bit with the mask.
            if( (*aux) & mask ){
                // add 0 to the answer.
                strcat(bynary,"1");
            }else{
                // add 1 to the answer.
                strcat(bynary,"0");
            }
            // shit the mask 1 pos to left.
            mask= mask<<1;
         }
         aux++
    }
    return binary;
}