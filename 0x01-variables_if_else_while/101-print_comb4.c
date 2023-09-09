#include <stdio.h>
/**
 * main -  Starting block
 *
 * Return:  Success(0)
 */
#include <stdio.h>

int main(void) {
  int x, y, z;

  for (x = '0'; x <= '9'; x++) {
    for (y = x + 1; y <= '9'; y++) {
      z = y + 1;
      if (x == '7' && y == '8') {
        break;
      }
      putchar(x);
      putchar(y);
      putchar(z);
      putchar(',');
      putchar(' ');
    }
  }

  putchar('\n');
  return (0);
}
}
