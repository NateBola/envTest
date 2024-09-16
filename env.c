#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *val = getenv("SNAP_USER_DATA");
  FILE *record;

  if (val == NULL) {
    printf("Cannot find the envrioment variable\n");
    return 1;
  }
  
  printf("%s\n", val);
  strcat(val, "/log.csv");
  printf("%s\n", val);
  return 0;
}


