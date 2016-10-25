include "stdio"

int recur(int i) {
  if (i > 0) {
    printf("%e\n", i);
    recurr(i--);
  }
}

int main() {
  recur(10)
}