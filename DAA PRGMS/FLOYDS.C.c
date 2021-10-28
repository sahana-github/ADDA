#include<stdio.h>
#include<stdlib.h>
int min(int a, int b){
	if(a>=b)
		return b;
	else
		return a;
}
void main(){
	int n, i, j, k;
	printf("Enter the order the Adjacency matrix.\n");
	scanf("%d", &n);
	int A[n][n];
	printf("Enter the elements of the Adjacency matrix.\n");
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
		scanf("%d", &A[i][j]);
	for(k=0; k<n; k++)
		for(i=0; i<n; i++)
			for(j=0; j<n; j++)
				A[i][j]=min(A[i][j], (A[i][k]+A[k][j]));	
	printf("The shortest path matrix is\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
			printf("%d\t",A[i][j]);
		printf("\n");
	}
}