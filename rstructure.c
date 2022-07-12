/*Author:Pankaj Dukare
------------------------------C Programming Structure------------------------------------
    -In C programming, a struct (or structure) is a collection of variables (can be of different types) under a single name.
    -syntax:
        struct structureName 
        {
            dataType member1;
            dataType member2;
            ...
        };
    -Create struct Variables
        -When a struct type is declared, no storage or memory is allocated.
        To allocate memory of a given structure type and work with it, we need to create variables.
        ex.
            struct Person
            {
                // code
            } person1, person2, p[20];
    -Access Members of a Structure
     There are two types of operators used for accessing members of a structure.
      1. - Member operator:
      2. -> - Structure pointer operator.
     ex.Suppose, you want to access the salary of person2. Here's how you can do it.
     person2.salary

*/
#include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct Person {
  char name[50];
  int citNo;
  float salary;
} person1;

int main() {

  // assign value to name of person1
  strcpy(person1.name, "George Orwell");

  // assign values to other person1 variables
  person1.citNo = 1984;
  person1. salary = 2500;

  // print struct variables
  printf("Name: %s\n", person1.name);
  printf("Citizenship No.: %d\n", person1.citNo);
  printf("Salary: %.2f", person1.salary);

  return 0;
}
/*
Output:
    Name: George Orwell
    Citizenship No.: 1984
    Salary: 2500.00
    
*/