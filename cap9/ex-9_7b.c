#include <stdio.h>
char func(a, b)
{
  return "teste";
}
int main() {
  printf("%d\n", func(12, 12.3E5));
  return 0;
}

