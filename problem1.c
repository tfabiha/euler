// T Fabiha
// Systems1 pd4
// W01 -- If you're feeling rusty, apply eul.
// 2018-09-12

# include <stdio.h>
# include <stdlib.h>

int main()
{
  /*
    Problem 1:
      If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

      Find the sum of all the multiples of 3 or 5 below 1000.
  */

  int ans = 0;

  for (int i = 0; i < 1000; i++)
  {
    if ((i % 3 == 0) || (i % 5 == 0))
    {
      ans += i;
    }
  }

  printf("Problem 1: %d \n", ans);

  return 0;
}
