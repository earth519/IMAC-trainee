#include <stdio.h>

int main() {
  int number;
    printf("Please type in the number: ");
    scanf("%d",&number);
    for (int x = 1; x < number+1; x++) {
        if (x%2==1){
          printf("*");
        }
        else{
          printf("-");
        }
        }
}
