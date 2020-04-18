#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <errno.h>
char *stringToBinary(char *s)
{
  size_t slen = strlen(s);

  errno = 0;
  char *binary = malloc(slen * CHAR_BIT + 1);
  if (slen == 0) {
    *binary = '\0';
    return binary;
  }
  char *ptr;
  char *start = binary;
  int i;
  for (ptr = s; *ptr != '\0'; ptr++) {
    for (i = CHAR_BIT - 1; i >= 0; i--, binary++) {
      *binary = (*ptr & 1 << i) ? '1' : '0';
    }
  }
  *binary = '\0';
  binary = start;
  return binary;
}


int main()
{
  char *output;
  char msg[15] = "TEAM 2005";
  output = stringToBinary(msg);
  printf("%s\n", output);
  free(output);
  exit(EXIT_SUCCESS);
}
