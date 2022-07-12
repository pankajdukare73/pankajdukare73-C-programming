/*Author:Pankaj Dukare
------------------------------C Programming fuction part 2 user define function ------------------------------------
    + User-defined functions:
            -You can also create functions as per your need. Such functions created by the user are known as user-defined function
            -Syntax:
                #include <stdio.h>
                returnType functionName(type1 argument1, type2 argument2, ...);  //function defination
                {
                    ... .. ...
                    ... .. ...
                }
                int main()
                {
                    ... .. ...             
                    ... .. ...
                    functionName(arg1,arg2,..);//call function
                    ... .. ...
                    ... .. ...
                }
            -How user-defined function works?
                -The execution of a C program begins from the main() function.
                -When the compiler encounters functionName();,control of the program jumps to void functionName().
                -And, the compiler starts executing the codes inside functionName().
                -The control of the program jumps back to the main() function once code inside the function definition is executed.
            -Types of User-defined Functions
                1.No Argument Passed and No Return Value
                2.No Arguments Passed But Returns a Value
                3.Argument Passed But No Return Value
                4.Argument Passed and Returns a Value
*/
#include <stdio.h>
int addNumbers(int a, int b);         // function defination

int main()
{
    int n1,n2,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = addNumbers(n1, n2);        // function call
    printf("sum = %d",sum);

    return 0;
}

int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    return result;                  // return statement
}

/*
Output:
    Enters two numbers: 12 45
    sum = 57
*/