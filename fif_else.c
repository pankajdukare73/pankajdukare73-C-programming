/*Author:Pankaj Dukare
------------------------------C Programming if...else Statement------------------------------------
    -The if statement evaluates the test expression inside the parenthesis ().
        + If the test expression is evaluated to true, statements inside the body of if are executed.
        + If the test expression is evaluated to false, statements inside the body of if are not executed.
    -C if Statement:
        if (test expression) 
        {
          // code
        }

    -C if...else Statement:
        if (test expression)
        {
            // run code if test expression is true
        }
        else
        {
            // run code if test expression is false
        }
        
    -C if...else Ladder
        if (test expression1)
        {
            // statement(s)
        }
        else if(test expression2)
        {
            // statement(s)
        }
        else if (test expression3)
        {
            // statement(s)
        }
        else
        {
            // statement(s)
        }
73*/

#include <stdio.h>
int main() 
{
   printf("IF statement: \n");
   
   int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("You entered %d.\n", number);
    }

    printf("\n\nIf.......Else Statement:\n");
    printf("Enter an integer: ");
    scanf("%d", &number);
    // True if the remainder is 0
    if  (number%2 == 0) {
        printf("%d is an even integer.",number);
    }
    else {
        printf("%d is an odd integer.",number);
    }

    printf("\n\nIf.......Else ladder Statement:\n");
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);
    //checks if the two integers are equal.
    if(number1 == number2) {
        printf("Result: %d = %d",number1,number2);
    }
    //checks if number1 is greater than number2.
    else if (number1 > number2) {
        printf("Result: %d > %d", number1, number2);
    }
    //checks if both test expressions are false
    else {
        printf("Result: %d < %d",number1, number2);
    }

   return 0;
}
/*
Output:
    IF statement: 
        Enter an integer: 12

    If.......Else Statement:
        Enter an integer: 45
        45 is an odd integer.

    If.......Else ladder Statement:
        Enter two integers: 78
        35
        Result: 78 > 35
*/