/*Author:Pankaj Dukare
------------------------------C Programming break,continue and goto ------------------------------------
    *C braek:
        -The break statement ends the loop immediately when it is encountered.
        -Its syntax is:
            break;
    *C continue:
        -The continue statement skips the current iteration of the loop and continues with the next iteration.
        -Its syntax is:
            continue;
    *c goto:
        -The goto statement allows us to transfer control of the program to the specified label.
        -Syntax of goto Statement:
        goto label;
        ... .. ...
        ... .. ...
        label: 
        statement;
73*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a=1;
    start:
    if (a>3)
    {
       exit(0);
    }
    printf("Program execution started.");
    for(int i=0;i<20;i++)
    {
        if(i==10)
        {
          break; //it stop the loop
        }
        if(i%2==0)
        {
            continue; //it skip the below part
        }
        printf("%d \t",i);
       
    }
    printf("\n");
     a++;
    goto start;
   
    
}


/*
Output:
    Program execution started.1     3       5       7       9 
    Program execution started.1     3       5       7       9
    Program execution started.1     3       5       7     
*/