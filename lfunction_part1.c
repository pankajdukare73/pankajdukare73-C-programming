/*Author:Pankaj Dukare
------------------------------C Programming Function ------------------------------------
    -A function is a block of code that performs a specific task.
    -it also use for Dividing a complex problem into smaller chunks makes our program easy to understand and reuse.
    -C Recursion
        -A function that calls itself is known as a recursive function. And, this technique is known as recursion.
        -syntax:
            void recurse()
            {
                ... .. ...
                recurse();
                ... .. ...
            }
            int main()
            {
                ... .. ...
                recurse();
                ... .. ...
            }
    -Types of function
        There are two types of function in C programming:
         + User-defined functions:
         + Standard library functions:
            -The standard library functions are built-in functions in C programming.
            -These functions are defined in header files. 
         1.C <ctype.h>:
          -function:
            +C isalnum():checks alphanumeric character
            +C isalpha():checks whether a character is an alphabet or not
            +C iscntrl():checks control character
            +C isgraph():checks graphic character
            +C islower():checks lowercase alphabet
            +C isprint():checks printable character
            +C ispunct():checks punctuation
            +C isspace():check white-space character
            +C isupper():checks uppercase alphabet
            +C isxdigit():checks hexadecimal digit character
            +C tolower():converts alphabet to lowercase
            C toupper():converts to uppercase alphabet

         2.C <math.h>:
          -function:
            +C acos():computes arc cosine
            +C acosh():computes arc hyperbolic cosine
            +C asin():computes arc sine
            +C asinh():computes the hyperbolic of arc sine of an argument
            +C atan():computes the arc tangent of an argument
            +C atan2():computes the arc tangent of an argument.
            +C atanh():computes arc hyperbolic tangent.
            +C cbrt():computes cube root of a number
            +C ceil():computes the nearest integer greater than argument.
            +C cos():computes the cosine of an argument.
            +C cosh():computer hyperbolic cosine.
            +C exp():computes the exponential raised to the argument
            +C fabs():computes absolute value
            +C floor():calculates the nearest integer less than argument
            +C hypot():computes hypotenuse
            +C log():computes natural logarithm of an argument.
            +C log10():computes the base 10 logarithm of an argument.
            +C pow():Computes power of a number
            +C sin():compute sine of a number
            +C sinh():computes the hyperbolic sine of an argument.
            +C sqrt():computes square root of a number
            +C tan():computes tangent
            +C tanh():computes the hyperbolic tangent of an argument

         3.C <string.h>:
           -function:
            +C strcat():Concatenates two strings
            +C strcmp():compares two strings
            +C strcpy():copies string
            +C strlen():calculates the length of a string

*/
#include <stdio.h>
#include <math.h>
int main()
{
   float num, root;
   printf("Enter a number: ");
   scanf("%f", &num);

   // Computes the square root of num and stores in root.
   root = sqrt(num);

   printf("Square root of %.2f = %.2f", num, root);
   return 0;
}

/*
Output:
    Enter a number: 25
    Square root of 25.00 = 5.00
*/