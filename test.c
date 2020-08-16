#include <stdint.h>
#include <stdio.h>
#include <math.h>



int main() {
  uint16_t a = pow(2, 16);
  uint16_t arr[4] = {1, 2, 3, 4};

  uint16_t add = 0x0;

  printf("%p", arr);
  fflush(stdout);
  printf("%p", arr);
  uint16_t* arr_p = arr + add;
}
