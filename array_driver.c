
#include<stdlib.h>
#include<stdio.h>

#include"array_utils.h"
//int subSum(const int *a, int size, int i, int j);
int main(int argc, char **argv){

//int *a = NULL;
int *a[6];
int k=1;
for(k=0; k<6; k++){
  *a[k];
}
int size = 6;
int i = 2;
int j = 5;

int sum = subSum(*a, size, i, j);

printf("%d\n", sum);
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
