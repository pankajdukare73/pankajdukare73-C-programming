/*Author:Pankaj Dukare
------------------------------C Programming Variable------------------------------------
    -Variables:
        -A variable is a name of the memory location.
        -It is used to store data.
        -Its value can be changed, and it can be reused many times.
        -syntax:
            Datatype variable_Name;
            int a;
        -type of variable:
            -local variable:
                -A variable that is declared inside the function or block is called a local variable.
            -global variable:
                -A variable that is declared outside the function or block is called a global variable.
            -static variable:
                -A variable that is declared with the static keyword is called static variable.
                -It retains its value between multiple function calls.
                -static int y=10;
            -automatic variable:
                -All variables in C that are declared inside the block, are automatic variables by default.
                -We can explicitly declare an automatic variable using auto keyword.
                -auto int y=20;
            -external variable:
                -We can share a variable in multiple C source files by using an external variable.
                -To declare an external variable, you need to use extern keyword.
                -myfile.h
                extern int x=10;
                use this using #include <myfile.h>
    -Datatype:
        -
        ---------------------------------------------------------
             Types	                Data Types
        ---------------------------------------------------------
        -Basic Data Type	    int, char, float, double
        -Derived Data Type	    array, pointer, structure, union
        -Enumeration Data Type	enum
        -Void Data Type	        void
        ---------------------------------------------------------
    -Format Specifiers
        -The Format specifier is a string used in the formatted input and output functions.
        -The format string determines the format of the input and output.
        -The format string always starts with a '%' character.
    -------------------------------------------------------------------------------------------
        Format specifier	            Description
    -------------------------------------------------------------------------------------------
        %d or %i	        It is used to print the signed integer value.
        %u	                It is used to print the unsigned integer value.
        %f	                It is used for printing the decimal floating-point values.%_f number after .
        %e/%E	            It is used for scientific notation. It is also known as Mantissa or Exponent.
        %p	                It is used to print the address in a hexadecimal form.
        %c	                It is used to print the unsigned character.
        %s	                It is used to print the strings.
        %ld	                It is used to print the long-signed integer value.
*/

#include <stdio.h>
int e=10; //global variable
void main() //void type
{
     printf("The value of global variable is %d\n",e);
    char c; //char type local variable
    printf("Enter Character value:");
    scanf("%c",&c);
    printf("Your enter character value is %c\n",c);
   auto int a; //integer type auto variable
    printf("\nEnter Integer value:");
    scanf("%d",&a);
    printf("Your enter integer value is %d\n",a);
   static float b; //float type static variable
    printf("\nEnter Float value:");
    scanf("%f",&b);
    printf("Your enter Float value is %f\n",b);
    char d[100]; //sting type string is array of character
    printf("\nEnter String value:");
    scanf("%s",&d);
    printf("Your enter String value is %s",d);
     printf("\nthe address of this chacter in memory is %p.",d);
}
/*
Output:
   The value of global variable is 10Enter Character value:p
Your enter character value is p

Enter Integer value:12
Your enter integer value is 12

Enter Float value:45.23
Your enter Float value is 45.230000

Enter String value:pankaj
Your enter String value is pankaj
the address of this chacter in memory is 0061FE64.
*/