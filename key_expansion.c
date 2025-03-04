#include <stdio.h>

// Rotate bytes in an integer to the left
// (loops the left-most byte to the right-most side)
int RotWord(unsigned int word) {
  int zeroth_byte = word >> 24;
  word <<= 8;
  return word ^ zeroth_byte;
}

int main() {
  
  unsigned int test = 16777217;
  int result = RotWord(test);
  printf("%u, %u", test, result);
}


