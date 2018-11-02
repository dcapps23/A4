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
   if(i < 0 || i > size) {
     return 1;
   } else if(j < 0 || j > size) {
     return 2;
   }
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
   while(i<=size){
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
  int temp = 0;
  while(j<=size){
    temp = subSum(a, size, i, j);
    if(temp > sum){
      sum = temp;
      j++;
    }else if(temp == sum){
      sum = temp;
      j++;
    }else if(temp < sum){
      j = size;
      while(i<=size){
        temp = subSum(a, size, i, j);
        if(temp > sum){
          sum = temp;
          i++;
        }else if(temp == sum){
          sum = temp;
          i++;
        }else if(temp < sum){
          return sum;
        }
      }
    }
  }
}

int containsWithin(const int *a, int size, int x, int i, int j){
   while(i <= j){
     if(x == a[i]){
       return 0;
     }else if(a[i] == size){
       return 1;
     }else if(x != a[i]){
       i++;
     }
   }
}

// int contains(const int *a, int size, int x){
//
//   size_t size = sizeof(a) / sizeof(a[0]);
//
//   if(size <= 0){
//     printf("Error: Invalid Size Parameter.\n");
//     return 0;
//   }
//
//   for(int i = 0; i < size; i++){
//     if(*a[i] == x){
//       printf("The integer array does conatain %d. \n", x);
//       return 0;
//     }
//   }
//   printf("The integer array does not contain %d. \n", x);
//   return 0;
// }
//
// int isEqual(const int *a, const int *b, int size){
//
//   size_t size = sizeof(a) / sizeof(a[0]);
//
//   if(size <= 0){
//     printf("Error: Invalid Size Parameter.\n");
//     return 0;
//   }
//
//   for(int i = 0; i < size; i++){
//     if(*a[i] != *b[i]){
//       printf("The arrays are not equal. \n");
//       return 0;
//     }
//
//   }
//   printf("The arrays are equal! \n");
//   return 0;
// }
//
// int containsSameElements(const int *a, int sizeOfA, const int *b, int sizeOfB){
//
// }
//
// int isPermutation(const int *a, int size){
//
// }
//
// int orderStatistic(const int *a, int size, int k){
//
// }
