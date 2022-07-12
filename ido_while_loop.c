/*Author:Pankaj Dukare
------------------------------C Programming Do While Loop ------------------------------------
    -The do..while loop is similar to the while loop with one important difference.
    The body of do...while loop is executed at least once. Only then, the test expression is evaluated.

    -The syntax of the do...while loop is:
        do 
        {
         // the body of the loop
        }
        while (testExpression);
    -How do...while loop works?
        + The body of do...while loop is executed once. Only then, the testExpression is evaluated.
        + If testExpression is true, the body of the loop is executed again and testExpression is evaluated once more.
        + This process goes on until testExpression becomes false.
        + If testExpression is false, the loop ends.
*/

#include <stdio.h>
int main() {
  int i = 1;
  do{
    printf("%d\t", i);
    ++i;
  } 
  while (i <= 10);

  return 0;
}

/*
Output:
    1       2       3       4       5       6       7       8       9       10
    
*/