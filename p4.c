// c program to find the symmetric difference of two sorted array/set. 
#include<stdio.h> 
void symmDiff(int set1[], int set2[], int n, int m) 
{ 
	// Traverse both array/set simultaneously. 
	int i = 0, j = 0; 
	while (i < n && j < m) 
	{ 
		// Print smaller element and move 
		// ahead in set/array with smaller element 
		if (set1[i] < set2[j]) 
		{ 
			// cout << set1[i]<<" "; 
            printf("%d ",set1[i]);
			i++; 
		} 
		else if (set2[j] < set1[i]) 
		{ 
			// cout << set2[j]<<" "; 
            printf("%d ", set2[j]);
			j++; 
		} 

		// If both elements same, move ahead in both set/array. 
		else
		{ 
			i++; 
			j++; 
		} 
	} 
} 

// Driver code 
int main() 
{ 
	int set1[] = {2, 4, 5, 7, 8, 10, 12, 15}; 
	int set2[] = {5, 8, 11, 12, 14, 15}; 
	int n = sizeof(set1)/sizeof(set1[0]); 
	int m = sizeof(set2)/sizeof(set2[0]); 
	symmDiff(set1, set2, n, m); 
	return 0; 
} 
