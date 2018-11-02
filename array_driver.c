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

int size = 100;
int i = 99;
int j = 100;
int *a = (int *) malloc(size * sizeof(int));
for(int k=0; k<=100; k++){ //creates integer array from 0 to 6
  a[k] = k;
  printf("%d,",a[k]);
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
