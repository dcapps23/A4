/*
 * Authors: Daryn Capps and Jacob Sinsel
 *
 * Source file
 */

#include <stdio.h>
#include <stdlib.h>
#include "array_utils.h"

/*
* this function takes an array (a) and finds the sum between its ith and jth elements
*/
int subSum(const int *a, int size, int i, int j){
   int sum = 0;
   int temp = 0;
   while(i<=j){
     sum = a[i] + temp;
     temp = sum;
     i++;
   }
   return sum;
}
/*
* finds the sum of every element in an array
*/
int sum(const int *a, int size){
   int sum = 0;
   int temp = 0;
   int i = 0;
   while(i<=(size-1)){
     sum = a[i] + temp;
     temp = sum;
     i++;
   }
  return sum;
}
/*
* finds the sum of the largest contiguous subarray or array a
*/
int maxSubArraySum(const int *a, int size){
  int i = 0;
  int j = 0;
  int sum = 0;
  int maxSum = a[0];
  for(i=0; i<=(size-1); i++){
	for(j=i; j<=(size-1); j++){
		sum = subSum(a, size, i, j);
		if(sum > maxSum){
			maxSum = sum;
		}
	}
  }
  
  return maxSum;
}

int containsWithin(const int *a, int size, int x, int i, int j){
   while(i <= j){
     if(x == a[i]){
       return 1;
     }else if(x != a[i]){
       i++;
     }
   }
  return 0;
}

int contains(const int *a, int size, int x){
  if((size-1) <= 0){
    printf("Error: Invalid Size Parameter.\n");
  }else{
    int i = 0;
    int j = (size-1);
    return containsWithin(a, size, x, i, j);
  }
  return 0;
}

int isEqual(const int *a, const int *b, int size){
  if(size == 0){
    printf("Error: Invalid Size Parameter.\n");
  }else{
    int i = 0;
    while(i <= (size-1)){
      if(a[i] == b[i]){
      i++;
	  }else if(a[i] != b[i]){
      return 0;
	  }
	}
    return 1;
  }
  return 1;
  }

int containsSameElements(const int *a, int sizeOfA, const int *b, int sizeOfB){
  int i = 0;
  if(sizeOfA == sizeOfB){
    return 0;
  }
    while(i < (sizeOfB-1)){
      if(a[i] == b[i]){
        i++;
      }else if(a[i] != b[i]){
        return 1;
      }
    }
  return 0;
}

int isPermutation(const int *a, int size){
  int *arr = NULL;
  arr = (int*)malloc(size * sizeof(int));
  for(int i = 0; i <= (size-1); i++){
    arr[i] = 0;
  }
  for(int i=0; i<=(size-1); i++){
	 int index  = a[i];
	 if(index>= size || index< 0){
		 free(arr);
		 return 0;
	 }
	 arr[index]++;	 
  } 
  for(int i=0; i<=(size-1); i++){
	  if (arr[i] != 1) return 0;
  }
  return 1;
}

void selectionSort(int *a, int size) {
  int i, j, min_index;
  for(i=0; i<(size-1); i++) {
    min_index = i;
  for(j=i+1; j<(size); j++) {
    if(a[min_index] > a[j]) {
      min_index = j;
     }
   }
  //swap
  int t = a[i];
  a[i] = a[min_index];
  a[min_index] = t;
  }
}

int orderStatistic(const int *a, int size, int k){
  int *copy = (int *) malloc(size * sizeof(int));
  for(int i=0; i<(size); i++) {
	  copy[i] = a[i];
	}
  selectionSort(copy, size);
  return copy[k];
}
