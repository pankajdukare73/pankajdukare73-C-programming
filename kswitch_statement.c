/*Author:Pankaj Dukare
------------------------------C Programming switch Statement ------------------------------------
    -The switch statement allows us to execute one code block among many alternatives.
    -Syntax of switch...case
    switch (expression)
    ​{
        case constant1:
        // statements
        break;

        case constant2:
        // statements
        break;
        .
        .
        .
        default:
        // default statements
    }
    -How does the switch statement work?
        + The expression is evaluated once and compared with the values of each case label.
        + If there is a match, the corresponding statements after the matching label are executed.
        + If there is no match, the default statements are executed.
*/
#include <stdio.h>
void main() 
{
    int c;
    printf("Enter number between 1 to 5:");
    scanf("%d",&c);
   switch(c)
   {
         case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4 :
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        default:
            printf("You enter Wrong choice.");
   }
}
/*
Output:
    Enter number between 1 to 5:4
    Four

    Enter number between 1 to 5:6
    You enter Wrong choice.
*/