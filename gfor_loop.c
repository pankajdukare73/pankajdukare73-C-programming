/*Author:Pankaj Dukare
------------------------------C Programming For Loop------------------------------------
    -In programming, a loop is used to repeat a block of code until the specified condition is met.
    -For Loop:
        for (initializationStatement; testExpression; updateStatement)
        {
            // statements inside the body of loop
        }
    -How for loop works?
        + The initialization statement is executed only once.
        + Then, the test expression is evaluated. If the test expression is evaluated to false, the for loop is terminated.
        + However, if the test expression is evaluated to true, statements inside the body of the for loop are executed, and the update expression is updated.
        + Again the test expression is evaluated.
        + This process goes on until the test expression is false. When the test expression is false, the loop terminates.
73*/

#include <stdio.h>
int main() {
   int i;
  for (i = 1; i < 11; ++i)
  {
    printf("%d ", i);
  }
   return 0;
}
/*
Output:
    1 2 3 4 5 6 7 8 9 10 
*/