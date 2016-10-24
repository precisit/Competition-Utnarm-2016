#include<stdio.h>

int recur(int i) {
  if (i > 0) {
    printf("%d\n", i);
    recur(i-1);
  }
  return 0;
}

int main() {
  printf("Hello World");
  recur(10);
  return 0;
}
