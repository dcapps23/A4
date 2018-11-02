/*
 * Authors: Daryn Capps and Jacob Sinsel
 *
 * Driver function for the array thing
 *
 */
#include<stdlib.h>
#include<stdio.h>
#include"array_utils.h"

int main(int argc, char **argv){
//note the following code creates a one deminsional array the formmating is just to fit in a smaller space

int i = 3;
int j = 6;
//int *a = (int *) malloc(size * sizeof(int));
// for(int k=0; k<=size; k++){ //creates integer array from k=x to k=y
//   a[k] = k;
//   if(k == size){
//     printf("%d\n", a[k]);
//   }else if((k % 10) == 0){
//     printf("%d\n", a[k]);
//   } else {
//     printf("%.2d|",a[k]);
//   }
// }

// int SubSum = subSum(a, size, i, j);
// if(SubSum == 1){
//   printf("Invalid i input!\n");
// }else if(SubSum == 2){
//   printf("Invalid j input!\n");
// }else {
//   printf("SubSum: %d\n", SubSum);
// }
int sizeOfA = 7;
int sizeOfB = 7;
int a[] = {6,5,1};
int b[] = {3, 2, 3, 3, 3, 2, 2, 2}
// int totalSum = sum(a, size);
// printf("totalSum: %d\n", totalSum);
//
// int conSum = maxSubArraySum(a, size);
// printf("conSum: %d\n", conSum);
// int x = -1;
int con = containsSameElements(a, int sizeOfA, b, sizeOfB);
if(con == 1){
  printf("same \n", x);
}else if(con == 0){
  printf(" NOt same  \n", x);
}
//free(a);
return 0;
}
