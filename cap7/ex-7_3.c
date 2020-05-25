#include <stdio.h>

static int x = 12;
extern int y = 0;

int func(int w) {
    static int x;

    printf("x=%d\n", x);
    return x += w;
}

int main() {
  func(5);
  func(x);
  func(y);

  return 0;
}
