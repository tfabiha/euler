// T Fabiha
// Systems1 pd4
// W01 -- If you're feeling rusty, apply eul.
// 2018-09-12

# include <stdio.h>
# include <stdlib.h>

int main()
{
  /*
    Problem 5:
      2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

      What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

  */

  int ans = 0;
  ans = 19 * 17 * 13 * 11 * 7 * 5 * 3 * 2;

  printf("Problem 5: %d \n", ans);

  return 0;
}
