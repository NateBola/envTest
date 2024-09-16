#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *val = getenv("SNAP_COMMON");
  FILE *record;

  if (val == NULL) {
    printf("Cannot find the envrioment variable\n");
    return 1;
  }
  
  printf("%s\n", val);
  strcat(val, "/log.csv");
  printf("%s\n", val);

  record = fopen(val, "a");
  printf("I can open files");
  fprintf(record, "Entering Log,1\n");
  fclose(record);
  return 0;
}


