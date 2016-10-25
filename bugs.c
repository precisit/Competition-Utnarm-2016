#include<stdio.h>

int recur(int i) {
  if (i > 0) {
    printf("%d\n", i);
    recur(--i);
  }
}

int main() {
  recur(10);
}