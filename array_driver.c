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

// int i = 3;
// int j = 6;



// int SubSum = subSum(a, size, i, j);
// if(SubSum == 1){
//   printf("Invalid i input!\n");
// }else if(SubSum == 2){
//   printf("Invalid j input!\n");
// }else {
//   printf("SubSum: %d\n", SubSum);
// }
int *a = NULL;
int *b = NULL;
int sizeOfA = 3;
int sizeOfB = 7;
a = (int *) malloc(sizeOfA * sizeof(int));
b = (int *) malloc(sizeOfB * sizeof(int));
int y[] = {0,2,1,3,6,5,4};
int z[] = {3, 2, 3, 3, 3, 2, 2, 2};
for(int k=0; k<=sizeOfA ; k++){ //creates integer array from k=x to k=y
  a[k] = y[k];
  if(k == sizeOfA){
    printf("%d\n", a[k]);
  }else if((k % 10) == 0){
    printf("%d\n", a[k]);
  } else {
    printf("%.2d|",a[k]);
  }
}
for(int k=0; k<=sizeOfB; k++){  //creates integer array from k=x to k=y
  b[k] = z[k];
  if(k == sizeOfB){
    printf("%d\n", a[k]);
  }else if((k % 10) == 0){
    printf("%d\n", a[k]);
  } else {
    printf("%.2d|",a[k]);
  }
}
int size = sizeOfA;
int con = isPermutation(a, size);
if(con == 1){
  printf("is Permutation \n");
}else if(con == 0){
  printf("aint permutilation %d\n", con);
}
//free(a);
return 0;
}
