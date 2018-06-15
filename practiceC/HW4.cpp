#include <stdio.h>

int main() {
  int n,m;
    printf("Please type in the number of rows: ");
    scanf("%d",&n);
    printf("Please type in the number of columns: ");
    scanf("%d",&m);
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < m; y++) {
          printf("*");
          printf("*");
        }
        printf("\n");
      }
}
