#include <stdio.h>

int main() {
  int i;
  int max = 0;
  int list[11] = {0};
  for (i = 1; i <= 10; i++) {
    list[i] = (int) i;
    if (max<i) {
      max=i;
    }
    printf("%d", list[i]);
  }
  printf("\n");
  printf("The max of this array is: %d", max);
}
