/*Author:Pankaj Dukare
------------------------------C Programming Array  ------------------------------------
    -An array is a variable that can store multiple similar type values.
    -syntax:
        -dataType arrayName[arraySize];
    -Access Array Elements
        -You can access elements of an array by indices.
        -Suppose you declared an array mark as above.
        The first element is mark[0], the second element is mark[1] and so on.
    -How to initialize an array:
        int mark[5] = {19, 10, 8, 17, 9};
        int mark[] = {19, 10, 8, 17, 9};
*/
#include <stdio.h>
int main() {
    int a;
    printf("How many number you want to add in array:");
    scanf("%d",&a);
  int values[a];

printf("Enter the %d number in array:",a);
  // taking input and storing it in an array
  for(int i = 0; i < a; ++i) {
     scanf("%d", &values[i]);
  }

  printf("array element are: ");

  // printing elements of an array
  for(int i = 0; i < a; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}

/*
Output:
    Enter the 3 number in array:12
                                34 
                                76
    array element are:12
                      34
                      76
    
*/