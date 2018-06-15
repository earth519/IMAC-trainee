#include <stdio.h>

int main() {
  int n;
    printf("Please type in the number of rows: ");
    scanf("%d",&n);
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
          if (x%2==0) {
            printf("*");
            printf("*");
          }
          else {
            printf("-");
            printf("-");
          }
        }
        printf("\n");
      
}
}
