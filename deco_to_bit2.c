
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
char buffer[8];
unsigned int_to_int(unsigned k) {
    if (k == 0) return 0;
    if (k == 1) return 1;                       /* optional */
    return (k % 2) + 10 * int_to_int(k / 2);
}

int main(){
    unsigned b=int_to_int(84);
    printf("\n%u\n",b);

    printf("\n%lu\n",sizeof(b));



}