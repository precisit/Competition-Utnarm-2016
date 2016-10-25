#include<stdio.h>

void recur(int i) {
  if (i >= 0) {
    recur(i - 1);
    printf("%d\n", i);
  }
}

int main() {
  recur(10);
}