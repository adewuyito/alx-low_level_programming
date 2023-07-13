#include <stdio.h>

// this method will print all the 32 bits of a number
void decimalToBinary(int num) {
  // assuming 32-bit integer
  int msb_found = 0;
  for (int i = 16; i >= 0; i--) {
    int mask = (1 << i);
    if (num & mask) {
      printf("1");
      msb_found = 1;
    } else if (msb_found) {
      printf("0");
    }
  }

  /**
  const int bitSize = 16;
  int masks[bitSize];
  for (int i = 0; i < bitSize; i++) {
    masks[i] = (1 << i);
  }
  int foundMSB = 0;
  for (int i = bitSize - 1; i >= 0; i--) {
    if (num & masks[i]) {
      putchar('1');
      foundMSB = 1;
    } else if (foundMSB) {
      putchar('0');
    }
  }**/
}

int main() {
  int num = 5;
  decimalToBinary((1 << 10) + 1);
  return 0;
}
