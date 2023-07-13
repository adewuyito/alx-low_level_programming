#include "main.h"

unsigned int binary_to_uint(const char *b) {
  const char *string = b;
  int array[16] = {0};
  int holder;

  if (string == NULL) {
    return (0);
  }
  holder = strlen(string);
  for (int i = 0; i < holder; i++) {
    array[i] = string[i];
  }
  for (int i = 0; i < holder; i++) {
    if (array[i] == '0') {
      array[i] = 0;
    } else if (array[i] == '1') {
      array[i] = 1;
    } else {
      return (0);
    }
  }

  
}