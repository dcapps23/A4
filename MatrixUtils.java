package unl.cse;


public class MatrixUtils {
	
	public static boolean isEqual(int A[][], int B[][]) {
		for(int i=0; i<A.length; i++){
			for(int j=0; j<A.length; j++){
				if(A[i][j] != B[i][j]){
					return false;
				}
			}
		}
		return true;
	}

	public static int [] getRow(int A[][], int i) {
		int []row = new int[A.length];
		for(int k=0; k<A.length; k++){ 
			row[k] = A[i][k];
		}
		return row;
	}

	public static int [] getCol(int A[][], int j) {
		int []collumn = new int[A.length];
		for(int k=0; k<A.length; k++){
			collumn[k] = A[k][j];
		}
		return collumn;
	}

	public static int [][] product(int A[][], int B[][]) {
		int [][]C = new int[A.length][A.length];
		for(int i=0; i<A.length; i++){
			int []row = new int[A.length];
			C[i] = row;
			for(int j = 0; j<A.length; j++){
				C[i][j] =0;
				for(int k=0; k<A.length; k++){
					C[i][j] += A[i][k] * B[k][j];
				}
				
			}
		}
		return C;
	}

	public static int [][] copyMatrix(int A[][]) {
		int copy[][] = new int [A.length][A.length];
		for(int i=0; i<A.length; i++){
			for(int k=0; k<A.length; k++){
				copy[i][k] = A[i][k];
			}
		}
		return copy; 
	}

	public static int [][] matrixPower(int A[][], int n) {
		int [][]mat = new int[A.length][A.length];
		for(int i=0; i<A.length; i++){
			for(int k =0; k<A.length; k++){
				if(i == k){
					mat[i][k] = 1;
				}
				else{
					mat[i][k] = 0;
				}
			}
		}
		
		for(int i=0; i<n; i++){
			int temp[][] = product(mat, A);
			mat = temp;
		}
		
		return mat;
	}


}
