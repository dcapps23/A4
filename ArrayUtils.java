package unl.cse;

import java.util.ArrayList;
import java.util.List;

public class ArrayUtils {

	public static int subSum(List<Integer> a, int i, int j) {
		 int sum = 0;
		   int temp = 0;
		   while(i<=j){
		     sum = a.get(i) + temp;
		     temp = sum;
		     i++;
		   }
		   return sum;
	}

	public static int sum(List<Integer> a) {
		int sum = 0;
		int temp = 0;
		int i = 0;
		   while(i<=(a.size()-1)){
		     sum = a.get(i) + temp;
		     temp = sum;
		     i++;
		   }
		  return sum;
	}

	public static int maxSubArraySum(List<Integer> a) {
		int i = 0;
		  int j = 0;
		  int sum = 0;
		  int maxSum = a.get(0);
		  for(i=0; i<=(a.size()-1); i++){
			for(j=i; j<=(a.size()-1); j++){
				sum = subSum(a, i, j);
				if(sum > maxSum){
					maxSum = sum;
				}
			}
		  }
		  
		  return maxSum;
	}

	public static boolean containsWithin(List<Integer> a, int x, int i, int j) {
		while(i <= j){
		     if(x == a.get(i)){
		       return true;
		     }else if(x != a.get(i)){
		       i++;
		     }
		   }
		  return false;
	}

	public static boolean contains(List<Integer> a, int x) {
		if((a.size()-1) <= 0){
		    System.out.printf("Error: Invalid Size Parameter.\n");
		  }else{
		    int i = 0;
		    int j = (a.size()-1);
		    return containsWithin(a, x, i, j);
		  }
		  return false;
	}

	public static boolean isEqual(List<Integer> a, List<Integer> b) {
		if(a.size() == 0){
		    System.out.printf("Error: Invalid Size Parameter.\n");
		  }else{
		    int i = 0;
		    while(i <= (a.size()-1)){
		      if(a.get(i) == b.get(i)){
		      i++;
			  }else if(a.get(i) != b.get(i)){
		      return false;
			  }
			}
		    return true;
		  }
		  return true;
	}

	public static boolean containsSameElements(List<Integer> a, List<Integer> b) {
		int i = 0;
		  if(a.size() == b.size()){
		    return false;
		  }
		    while(i < (b.size()-1)){
		      if(a.get(i) == b.get(i)){
		        i++;
		      }else if(a.get(i) != b.get(i)){
		        return true;
		      }
		    }
		  return false;
	}

	public static boolean isPermutation(List<Integer> a) {
		List<Integer>arr = new ArrayList<Integer>();
		  for(int i = 0; i <= (a.size()-1); i++){
		    arr.add(0);
		  }
		  for(int i=0; i<=(a.size()-1); i++){
			 int index  = a.get(i);
			 if(index>= a.size() || index< 0){
				 return false;
			 }
			 arr.set(index, arr.get(index)+1);	 
		  } 
		  for(int i=0; i<=(a.size()-1); i++){
			  if (arr.get(i) != 1){
				  return false;
			  }
		  }
		  return true;
	}
	

	public static List<Integer> copyArray(List<Integer> a) {
		List<Integer>copy = new ArrayList<Integer>();
		for(int i=0; i<a.size(); i++){			
			copy.add(a.get(i));
		}
		return copy;
	}

	public static int orderStatistic(List<Integer> a, int k) {
		List<Integer>copy = copyArray(a);
		  selectionSort(copy);
		  return copy.get(k);
	}

	public static void selectionSort(List<Integer> a) {
		int i, j, min_index;
		  for(i=0; i<(a.size()-1); i++) {
		    min_index = i;
		  for(j=i+1; j<a.size(); j++) {
		    if(a.get(min_index) > a.get(j)) {
		      min_index = j;
		     }
		   }
		  //swap
		  int t = a.get(i);
		  a.set(i, a.get(min_index));
		  a.set(min_index, t);
		  }
	}

}
