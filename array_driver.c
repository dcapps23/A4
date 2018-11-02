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
int size = 10;
int i = 99;
int j = 100;
int *a = (int *) malloc(size * sizeof(int));
for(int k=0; k<=size; k++){ //creates integer array from k=x to k=y
  a[k] = k;
  if(k == size){
    printf("%d\n", a[k]);
  }else if((k % 10) == 0){
    printf("%d\n", a[k]);
  } else {
    printf("%.2d|",a[k]);
  }
}

int SubSum = subSum(a, size, i, j);
if(SubSum == 1){
  printf("Invalid i input!");
}else if(SubSum == 2){
  printf("Invalid j input!");
}else {
  printf("SubSum: %d\n", SubSum);
}

int totalSum = sum(a, size);
printf("totalSum: %d\n", totalSum);
return 0;
}
