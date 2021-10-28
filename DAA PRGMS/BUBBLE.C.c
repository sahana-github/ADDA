#include<stdio.h>
#include<time.h>
void main()
{
	long int a[1000000],r,n,i,j,temp;
	clock_t start,end;
	double totaltime;
	printf("Enter the arrays size\n");
	scanf("%ld",&n);
	//printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
	r=rand();
	a[i]=r;
	}
	//scanf("%d",&a[i]);
	start=clock();
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	end=clock();
	totaltime=(double)(end-start)/CLOCKS_PER_SEC;
	
	printf("Sorted elements are\n");
	for(i=0;i<n;i++)
	printf("%ld\t",a[i]);
	printf("Total time taken is %lf\n",totaltime);
}