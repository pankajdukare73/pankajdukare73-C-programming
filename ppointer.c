/*Author:Pankaj Dukare
------------------------------C Programming c pointer ------------------------------------
    -The pointer in C language is a variable which stores the address of another variable.
    -address:
        If you have a variable var in your program, &var will give you its address in the memory.
    -syntax:
        int* p;
        int *p1;
        int * p2;
    -Assigning addresses to Pointers
        int* pc, c;
        c = 5;
        pc = &c;
    -print value of variable:
        printf("%d", *pc);  // Ouptut: 5
*/
#include <stdio.h>
int main()
{
   int* pc, c;
   c = 22;
   pc = &c;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);
    printf("Address of pc: %p\n", &pc);
    printf("Address of is pc: %p\n", pc);
    printf("Value of pc: %d\n\n", *pc);

}
/*
Output:
        Address of c: 0061FEC8
        Value of c: 22

        Address of pc: 0061FECC
        Address of is pc: 0061FEC8
        Value of pc: 22
*/