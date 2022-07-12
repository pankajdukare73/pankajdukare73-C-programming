/*Author:Pankaj Dukare
------------------------------C Programming C Storage Class------------------------------------
    -Type refers to the data type of a variable. And, storage class determines the scope, visibility and lifetime of a variable.
    -There are 4 types of storage class:
    ------------------------------------------------------------------------------------------------------
       storage classes      storage         garbage vale        Scope           life            declare
    ------------------------------------------------------------------------------------------------------
        1.automatic         stack           garbage value    within block    end of block        atomatic
        2.external        data segment          zero           global        till the program    automatic
        3.static          data segment          zero         within block    till the program    static keyword
        4.register        cpu register      Garbage value    within block    end of bock         register keyword
    ------------------------------------------------------------------------------------------
*/

#include <stdio.h>
void display();
int b=6;
int main()
{
    display();
    display();
}
void display()
{
    int a;
    b++;
    static int c = 1;
    c += 5;
    a=4;
     printf("a:%d\t",a);
      printf("b:%d \t",b);
    printf("c:%d\n",c);
}
/*
Output:
  a:4     b:7     c:6
  a:4     b:8     c:11  
*/