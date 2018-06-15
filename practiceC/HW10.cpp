#include <stdio.h>

int main() {
  int i;
  int min = 0;
  int list[11] = {0};
  for (i = 1; i <= 10; i++) {
    list[i] = (int) i;
    if (min>i) {
      min=i;
    }
    printf("%d", list[i]);
  }
  printf("\n");
  printf("The min of this array is: %d", min);
}
