/*Author:Pankaj Dukare
------------------------------C Programming Escape Sequence------------------------------------
    -An escape sequence in C language is a sequence of characters that doesn't represent 
    itself when used inside string literal or character.
    ----------------------------------------------------------------------------------------
     Escape Sequence	                Meaning
    ----------------------------------------------------------------------------------------
        \a	                        Alarm or Beep
        \b	                        Backspace
        \n	                        New Line
        \r	                        Carriage Return
        \t	                        Tab (Horizontal) it take 8 bit 
        \v	                        Vertical Tab
        \\	                        Backslash
        \'	                        Single Quote
        \"	                        Double Quote
        \?	                        Question Mark
        \nnn	                    octal number
        \xhh	                    hexadecimal number
        \0	                        Null
    ------------------------------------------------------------------------------------------
*/

#include <stdio.h>
int main() {

   printf("Hello,\n");
     printf("World!\bs\n");
     printf("surya\rdiv");
     printf("\npankaj  dukare");
     printf("\npankaj73\tduka\0re");
    printf("\' \" \? \\ \n");
   for(int i=0;i<10;i++)
   {
       printf("%d\t",i);
   }
   for(int i=0;i<10;i++)
   {
       printf("%d\v",i);
   }
    return 0;
}
/*
Output:
    Hello, World! 
*/