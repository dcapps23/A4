/**
* creataed by Daryn Capps and Jacob Sinsel
* function definitions for matrix thing
*/
#include <stdio.h>
#include <stdlib.h>
#include "matrix_utils.h"


int isEqual(int **A, int **B, int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(A[i][j] != B[i][j]){
				return 0;
			}
		}
	}
	return 1;
}

int *getRow(int **A, int n, int i){
	int *row = (int *) malloc(n * sizeof(int));
	for(int k=0; k<n; k++){ 
		row[k] = A[i][k];
	}
	return row;
}

int *getCol(int **A, int n, int j){
	int *collumn = (int *) malloc(n * sizeof(int));
	for(int k=0; k<n; k++){
		collumn[k] = A[k][j];
	}
	return collumn;
}

int ** product(int **A, int **B, int n){
	int **C = (int **)malloc(sizeof(int*) * n);
	for(int i=0; i<n; i++){
		int *row = (int *) malloc(n * sizeof(int));
		C[i] = row;
		for(int j = 0; j<n; j++){
			C[i][j] =0;
			for(int k=0; k<n; k++){
				C[i][j] += A[i][k] * B[k][j];
			}
			
		}
	}
	return C;
}

int **matrixPower(int **A, int size, int n){
	int **mat = (int **)malloc(sizeof(int*) * size); 
	for(int i=0; i<size; i++){
		mat[i] = (int *)malloc(size * sizeof(int));//makes rows
		for(int k =0; k<size; k++){
			if(i == k){
				mat[i][k] = 1;
			}
			else{
				mat[i][k] = 0;
			}
		}
	}
	
	for(int i=0; i<n; i++){
		int **temp = product(mat, A, size);
		for(int i=0; i<size; i++){
			free(mat[i]);
		}
		free(mat);
		mat = temp;
	}
	
	return mat;
}
