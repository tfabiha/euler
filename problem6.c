// T Fabiha
// Systems1 pd4
// W01 -- If you're feeling rusty, apply eul.
// 2018-09-12

# include <stdio.h>
# include <stdlib.h>

int main()
{
  /*
    The sum of the squares of the first ten natural numbers is,
    1^2 + 2^2 + ... + 10^2 = 385

    The square of the sum of the first ten natural numbers is,
    (1 + 2 + ... + 10)^2 = 552 = 3025

    Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

    Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
  */

  int firstSqr = 0;
  int firstSum = 0;

  for (int i = 1; i <= 100; i++)
  {
    firstSqr += i * i;
    firstSum += i;
  }

  firstSum *= firstSum;

  int ans = firstSqr - firstSum;

  printf("Problem 6: %d \n", ans);

  return 0;
}
