#include <stdio.h>
#include <conio.h>

void main() {
   int arr1[5] = {1, 2, 3, 4, 5};
   int arr2[5];
   int *p1, *p2;
   clrscr();
   p1 = arr1; // Assigning the address of arr1 to p1
   p2 = arr2; // Assigning the address of arr2 to p2
   printf("\n\nElements of arr1: ");
   for(int i=0; i<5; i++) {
      printf("%d ", arr1[i]);}
   // Copying elements of arr1 to arr2 using pointers
   for(int i=0; i<5; i++) {
      *(p2+i) = *(p1+i);
   }

   // Printing the elements of arr2
   printf("\nElements of arr2: ");
   for(int i=0; i<5; i++) {
      printf("%d ", *(p2+i));
   }

   getch();
}
