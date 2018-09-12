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

  for (int x = 2520; ans == 0; x += 2)
  {
      if ((x % 19 == 0) && (x % 18 == 0) && (x % 17 == 0) && (x % 16 == 0) && (x % 15 == 0) && (x % 14 == 0) && (x % 13 == 0) &&
          (x % 12 == 0) && (x % 11 == 0) && (x % 10 == 0) && (x % 9 == 0) && (x % 8 == 0) && (x % 7 == 0) && (x % 6 == 0) &&
          (x % 5 == 0) && (x % 4 == 0) && (x % 3 == 0))
      {
        ans = x;
      }
  }

  printf("Problem 5: %d \n", ans);

  return 0;
}
