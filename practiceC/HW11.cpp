#include <stdio.h>

int main() {
  int i;
  int avg = 0;
  int list[11] = {0};
  for (i = 1; i <= 10; i++) {
    list[i] = (int) i;
    avg += i;
    printf("%d", list[i]);
  }
  printf("\n");
  printf("The sum of this array is: %d", avg/10);
}
