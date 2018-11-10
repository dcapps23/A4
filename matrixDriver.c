/**
* matrix driver
*/
#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main(int argc, char **argv){
int size = 3;
int **I = Nu
matrixInt(size);
for(int q = 0; q <= 3; q++){
  for(int r=0; r <3; r++){
  printf("%d", I[q][r]);
}
printf("\n");
}



for(int i=0; i<size; i++){
  free(I[i]);
}
free(I);
// free(row);
// free(collumn);
return 0;

}
