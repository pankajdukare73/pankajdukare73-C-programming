/*Author:Pankaj Dukare
------------------------------C Programming Token------------------------------------
    -C program consists of various tokens and a token is either a keyword,
    an identifier, a constant, a string literal, or a symbol.

    * Semicolons:
        -In a C program, the semicolon is a statement terminator.
        -each individual statement must be ended with a semicolon.
    * Comments:
        -Comments are like helping text in your C program and they are ignored by the compiler.
            + Single line comment
            + Multiline comment
    *Identifiers:
        -A C identifier is a name used to identify a variable, function, or any other user-defined item. 
        -An identifier starts with a letter A to Z, a to z, or an underscore '_' followed by zero or more letters, underscores, and digits (0 to 9).
    *Keywords
        -Keywords are reserved words that has special meaning in C.
        -These reserved words may not be used as constants or variables or any other identifier names.

*/

#include <stdio.h>
int main() {
   int a=5; //here a is identifiers and int is keyword
   printf("the value of a is %d.",a);
   return 0;
}
/*
Output:
  the value of a is 5.
*/