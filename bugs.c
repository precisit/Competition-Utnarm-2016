#include<stdio.h>

int recur(int i) {
  if (i > 0) {
    printf("%d\n", recur(i - 1));
  }
  return i;
}

int main() {
  recur(10);
}