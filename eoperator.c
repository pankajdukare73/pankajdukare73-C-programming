/*Author:Pankaj Dukare
------------------------------C Programming Operator------------------------------------
    -An operator is simply a symbol that is used to perform operations.
    -type:
        -Arithmetic Operators:
            -An arithmetic operator performs mathematical operations such as addition,
            subtraction, multiplication, division etc on numerical values.
        --------------------------------------------------
            Operator	    Meaning of Operator
        --------------------------------------------------
            +	        addition or unary plus
            -	        subtraction or unary minus
            *	        multiplication
            /	        division
            %	        remainder after division (modulo division)
        --------------------------------------------------

        -Relational Operators:
            -A relational operator checks the relationship between two operands.
            -If the relation is true, it returns 1; if the relation is false, it returns value 0.
        -------------------------------------------------------------------
         Operator	 Meaning of Operator     	        Example
        -------------------------------------------------------------------
            ==	        Equal to                    5 == 3 is evaluated to 0
            >	        Greater than	            5 > 3 is evaluated to 1
            <	        Less than	                5 < 3 is evaluated to 0
            !=	        Not equal to	            5 != 3 is evaluated to 1
            >=	        Greater than or equal to	5 >= 3 is evaluated to 1
            <=	        Less than or equal to	    5 <= 3 is evaluated to 0
        -------------------------------------------------------------------

        -Logical Operators:
            -An expression containing logical operator returns either 0 or 1 depending upon whether expression results true or false.
            -Logical operators are commonly used in decision making in C programming.
        -----------------------------------------------------------------------------------------------------
         Operator	    Meaning	                        Example
        -----------------------------------------------------------------------------------------------------
            &&	        Logical AND.        True only if all operands are true	If c = 5 and d = 2 then,
                                            expression ((c==5) && (d>5)) equals to 0.
          ------------------------------------------------------------------------------------------------
            ||	        Logical OR.         True only if either one operand is true	If c = 5 and d = 2 then,
                                            expression ((c==5) || (d>5)) equals to 1.
          ----------------------------------------------------------------------------------------------
            !	        Logical NOT.        True only if the operand is 0	If c = 5 then,
                                            expression !(c==5) equals to 0.
        ----------------------------------------------------------------------------------------------------

        -Bitwise Operators:
        -------------------------------------------------------
         Operators	  Meaning of operators
        -------------------------------------------------------
            &	        Bitwise AND
            |	        Bitwise OR
            ^	        Bitwise exclusive OR
            ~	        Bitwise complement
            <<	        Shift left
            >>	        Shift right
        -------------------------------------------------------
    
        -Assignment Operator:
            -An assignment operator is used for assigning a value to a variable.
        -----------------------------------------------------------------
          Operator 	   Example	    Same as
        -----------------------------------------------------------------
            =	        a = b	    a = b
            +=	        a += b	    a = a+b
            -=	        a -= b	    a = a-b
            *=	        a *= b	    a = a*b
            /=	        a /= b	    a = a/b
            %=	        a %= b	    a = a%b
        -----------------------------------------------------------------

        -Misc Operator:
     ---------------------------------------------------------------------------------------------------------------
        Operator	        Description	                                     Example
     ---------------------------------------------------------------------------------------------------------------
        sizeof()	Returns the size of a variable.	        sizeof(a), where a is integer, will return 4.
        &	        Returns the address of a variable.	    &a; returns the actual address of the variable.
        *	        Pointer to a variable.	                *a;
        ? :	        Conditional Expression.	                If Condition is true ? then value X : otherwise value Y
     ---------------------------------------------------------------------------------------------------------------
        
*/

#include <stdio.h>
int main()
{
    printf("Arithmatic operator:\n");
    int a = 9, b = 4, c;
    c = a + b;
    printf("a+b = %d \n", c);
    c = a - b;
    printf("a-b = %d \n", c);
    c = a * b;
    printf("a*b = %d \n", c);
    c = a / b;
    printf("a/b = %d \n", c);
    c = a % b;
    printf("Remainder when a divided by b = %d \n", c);

    printf("\nAssignment operator:");
    a = 5;

    c = a; // c is 5
    printf("c = %d\n", c);
    c += a; // c is 10
    printf("c = %d\n", c);
    c -= a; // c is 5
    printf("c = %d\n", c);
    c *= a; // c is 25
    printf("c = %d\n", c);
    c /= a; // c is 5
    printf("c = %d\n", c);
    c %= a; // c = 0
    printf("c = %d\n", c);

    printf("\nRelational Operator:");
    a = 5, b = 5, c = 10;

    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);

    printf("\nRelational Opertor:");
    a = 12, b = 25;
    printf("\nOutput a&b = %d", a & b);
    printf("\nOutput a|b = %d", a | b);
    printf("\nOutput a^b = %d", a ^ b);
    printf("\nOutput ~a = %d\n", ~a);
    int num = 212, i;
    for (i = 0; i <= 2; ++i)
        printf("Right shift by %d: %d\n", i, num >> i);

    printf("\n");

    for (i = 0; i <= 2; ++i)
        printf("Left shift by %d: %d\n", i, num << i);

    printf("\nMisc Opertor:");
    printf("\n-SizeOf(a) is %d",sizeof(a));
    printf("\n-Address of a is %p",&a);
    printf("\n-The value at the a is %d",*(&a));
    return 0;
}
/*
Output:
    Arithmatic operator:
    a+b = 13 
    a-b = 5
    a*b = 36
    a/b = 2
    Remainder when a divided by b = 1

    Assignment operator:
    c = 5
    c = 10
    c = 5
    c = 25
    c = 5
    c = 0

    Relational Operator:5 == 5 is 1
    5 == 10 is 0
    5 > 5 is 0
    5 > 10 is 0
    5 < 5 is 0
    5 < 10 is 1
    5 != 5 is 0
    5 != 10 is 1
    5 >= 5 is 1
    5 >= 10 is 0
    5 <= 5 is 1
    5 <= 10 is 1

    Relational Opertor:
    Output a&b = 8
    Output a|b = 29
    Output a^b = 21
    Output ~a = -13
    Right shift by 0: 212
    Right shift by 1: 106
    Right shift by 2: 53

    Left shift by 0: 212
    Left shift by 1: 424
    Left shift by 2: 848

    Misc Opertor:
    SizeOf(a) is 4
    Address of a is 0061FEBC
    The value at the a is 12

*/