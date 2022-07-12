/*Author:Pankaj Dukare
------------------------------C Programming Dynamic Memory Allocation------------------------------------
    -Sometimes the size of the array you declared may be insufficient.
     To solve this issue, you can allocate memory manually during run-time.
     This is known as dynamic memory allocation in C programming.
    -To allocate memory dynamically, library functions are malloc(), calloc(), realloc() and free() are used.
    -These functions are defined in the <stdlib.h> header file.
    1.C malloc()
        -The name "malloc" stands for memory allocation.
        -The malloc() function reserves a block of memory of the specified number of bytes.
         And, it returns a pointer of void which can be casted into pointers of any form.
        -syntax:
            ptr = (castType*) malloc(size);
    2.C calloc()
        -The name "calloc" stands for contiguous allocation.
        -The malloc() function allocates memory and leaves the memory uninitialized,
         whereas the calloc() function allocates memory and initializes all bits to zero.
        -syntax:
            ptr = (castType*)calloc(n, size);
    3.C free()
        -Dynamically allocated memory created with either calloc() or malloc() doesn't get freed on their own.
         You must explicitly use free() to release the space.
        -syntax:
            free(ptr);
    4.C realloc()
        -If the dynamically allocated memory is insufficient or more than required,
         you can change the size of previously allocated memory using the realloc() function.
        -Syntax:
            ptr = realloc(old_ptr,new_size);


*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr, i , n1, n2;
  printf("Enter size: ");
  scanf("%d", &n1);

  ptr = (int*) malloc(n1 * sizeof(int));

  printf("Addresses of previously allocated memory:\n");
  for(i = 0; i < n1; ++i)
    printf("%pc\n",ptr + i);

  printf("\nEnter the new size: ");
  scanf("%d", &n2);

  // rellocating the memory
  ptr = realloc(ptr, n2 * sizeof(int));

  printf("Addresses of newly allocated memory:\n");
  for(i = 0; i < n2; ++i)
    printf("%pc\n", ptr + i);
  
  free(ptr);

  return 0;
}
/*2
Output:
    Enter size: 2
    Addresses of previously allocated memory:
    00C80C60c
    00C80C64c

    Enter the new size: 4
    Addresses of newly allocated memory:
    00C80C60c
    00C80C64c
    00C80C68c
    00C80C6Cc  
*/