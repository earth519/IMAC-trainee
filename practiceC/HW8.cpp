#include <stdio.h>

int main() {
  int i;
  int sum = 0;
  int list[11] = {0};
  for (i = 1; i <= 10; i++) {
    list[i] = (int) i;
    sum += i;
    printf("%d", list[i]);
  }
  printf("\n");
  printf("The sum of this array is: %d", sum);
}
