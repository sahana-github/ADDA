#include<stdio.h>
#include<stdlib.h>
int max(int a, int b){
	if(a>=b)
		return a;
	else
		return b;
}
void main(){
	int n, i, j, k;
	printf("Enter the order the Adjacency matrix.\n");
	scanf("%d", &n);
	int A[n][n];
	printf("Enter the elements of the Adjacency matrix (elements permitted are 0, 1).\n");
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
		scanf("%d", &A[i][j]);
	for(k=0; k<n; k++)
		for(i=0; i<n; i++)
			for(j=0; j<n; j++)
				A[i][j]=max(A[i][j], (A[i][k]&&A[k][j]));	
	printf("The transitive closure is\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
			printf("%d\t",A[i][j]);
		printf("\n");
	}
}