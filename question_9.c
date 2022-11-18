// 9. Write a function in C to merge two arrays of the same size sorted in descending order.
#include<stdio.h>
#include<conio.h>
int main() {
  /*Array Size Declaration*/
  int size1, size2, size3;
  printf("\nEnter the size for the first array: ");
  scanf("%d", & size1);
  printf("\nEnter the size for the second array: ");
  scanf("%d", & size2);
  
  size3 = size1 + size2;
  printf("\nEnter the elements in a sorted manner:");
  
  /*Array Declaration*/
  int array1[size1], array2[size2], array3[size3];
  /*Array Initialized*/
  for (int i = 0; i < size1; i++) {
    scanf("%d", & array1[i]);
    array3[i] = array1[i];
  }
  int k = size1;
  printf("\nEnter the elements in a sorted manner:");
  /*Array Initialized*/
  for (int i = 0; i < size2; i++) {
    scanf("%d", & array2[i]);
    array3[k] = array2[i];
    k++;
  }
  printf("\nmerged array of first and second:\n");
  for (int i = 0; i < size3; i++)
    /*Printing the merged array*/
    printf("%d ", array3[i]);

  printf("\nsorted array in descending order\n");
  /*Sorting Array*/
  for (int i = 0; i < size3; i++) {
    int temp;
    for (int j = i + 1; j < size3; j++) {
      if (array3[i] < array3[j]) {
        temp = array3[i];
        array3[i] = array3[j];
        array3[j] = temp;
      }
    }
  }
  /*Printing the sorted Array*/
  for (int i = 0; i < size3; i++) {
    printf(" %d ", array3[i]);
  }
  return 0;
}