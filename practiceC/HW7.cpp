#include <stdio.h>

int main() {
  int n,z;
    printf("Please type in the number of rows: ");
    scanf("%d",&n);
    z=n*2-2;
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < z; y++) {
            printf(" ");
          }
        z=z-1;
        for (int y = 0; y < x+1; y++) {
            printf("*");
          }
        for (int y = 1; y < x+1; y++) {
            printf("*");
          }
        printf("\n");
      }
}
