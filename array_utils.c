/*
 * Authors: Daryn Capps and Jacob Sinsel
 *
 * Source file
 */

#include <stdio.h>
#include <stdlib.h>
#include "array_utils.h"

 int subSum(const int *a, int size, int i, int j){

   
   int sum = 0;
   int temp = 0;
   j = j+1;

  
   for(i; i < j; i++){
     sum += a[i+1];
   }
   return sum;
 }

 int sum(const int *a, int size){
   int sum = 0;
   int temp = 0;
   int i =0;
   for(i = 0  ; i <= size; i++){
     sum += a[i];
     //temp = a[i];
   }
   return sum;
 }

 int maxSubArraySum(const int *a, int size){

 }

int containsWithin(const int *a, int size, int x, int i, int j){

   while(a[i] <= j){

     }
   }



 int contains(const int *a, int size, int x);

 int isEqual(const int *a, const int *b, int size);

 int containsSameElements(const int *a, int sizeOfA, const int *b, int sizeOfB);

 int isPermutation(const int *a, int size);

 int orderStatistic(const int *a, int size, int k);
