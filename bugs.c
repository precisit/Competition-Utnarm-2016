#include<stdio.h>

void recur(int i) {
  if (i >= 0) {
    recur(--i);
    printf("%d\n", i + 1);
  }
}

int main() {
  recur(10);
  return 0;
}