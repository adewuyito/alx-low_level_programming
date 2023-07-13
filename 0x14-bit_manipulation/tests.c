#include <stdio.h>
#include <string.h>

int main(void) {

  char *string = "10011";
  int array[16] = {0};
  int holder;
  unsigned int decimal;

  holder = strlen(string);
  for (int i = 0; i < holder; i++) {
    if (string[i] == '0' | string[i] == '1') {
      array[i] = string[i] - '0';
    } else {
      return (0);
    }
  }
  /**
  for (int i = 0; i < holder; i++) {
    if (array[i] == '0') {
      array[i] = 0;
    } else if (array[i] == '1') {
      array[i] = 1;
    } else {
      return (0);
    }
  }**/

  decimal = array[holder - 1];
  for (int i = holder - 2; i >= 0; i--) {
    printf("%d\t%d\n", decimal, array[i]);
    decimal *= 2;
    decimal += array[i];
  }
  /**
  printf("The binary is -->");
  for (int i = holder - 1; i >= 0; i--) {
    printf("%d", array[i]);
  }
  printf("\nThe integer is --> %s\n", string);
  **/

  printf("The decimal is --> %d\n", decimal);
  return 0;
}