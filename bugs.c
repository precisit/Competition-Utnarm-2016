include "stdio"

int recur(int i) {
  if (i > 0) {
    printf("%e\n", i);
    recur(--i);
  }
}

int main() {
  recur(10);
}