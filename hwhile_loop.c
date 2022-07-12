/*Author:Pankaj Dukare
------------------------------C Programming While loop------------------------------------
 -The syntax of the while loop is:
    while (testExpression)
    {
      // the body of the loop 
    }
 -How while loop works?
    + The while loop evaluates the testExpression inside the parentheses ().
    + If testExpression is true, statements inside the body of while loop are executed. Then, testExpression is evaluated again.
    + The process goes on until testExpression is evaluated to false.
    + If testExpression is false, the loop terminates (ends).
    
73*/

#include <stdio.h>
int main() {
  int i = 1;
    
  while (i <= 5) {
    printf("%d\n", i);
    ++i;
  }

  return 0;
}
/*
Output:
    1
    2
    3
    4
    5
*/