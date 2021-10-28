#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,item;
clrscr();
printf("Enter the number of elements in an array\n");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{
item=a[i];
j=i-1;
while((j>=0)&&(item<a[j]))
{
a[j+1]=a[j];
j--;
}
a[j+1]=item;
}
printf("List of elements after sorting \n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
getch();
}

/*OUTPUT
Enter the number of elements in an array
5                                                                               
Enter the array elements                                                        
25                                                                              
10                                                                              
1                                                                               
56                                                                              
3                                                                               
List of elements after sorting                                                  
1                                                                               
3                                                                               
10
25
56
*/












                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
