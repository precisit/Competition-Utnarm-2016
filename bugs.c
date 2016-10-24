#include<stdio.h>

int recur(int i) {
  if (i > 0) {
    recur(i - 1);
  }
  printf("%d\n", i);
  return 0;
}

int main() {
  recur(10);
}
