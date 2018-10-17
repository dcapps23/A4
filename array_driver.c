
#include<stdlib.h>
#include<stdio.h>

#include"array_utils.h"
//int subSum(const int *a, int size, int i, int j);
int main(int argc, char **argv){

int size = 6;
int i = 0;
int j = 6;
int *a = (int *) malloc(size * sizeof(int));
for(int k=1; k<7; k++){
  a[k] = k;
  printf("%d\n",a[k]);
 }
 
int sum = subSum(a, size, i, j);

printf("sum: %d\n", sum);
return 0;

}
/*int subSum(const int *a, int size, int i, int j){

  //a = (int *) malloc(size * sizeof(int));
  int sum = 0;
  int temp = 0;

  for(i = i - 1; i <= j; i++){
    sum = a[i] + temp;
    temp = a[i];
  }
  return sum;
} */
