#include<stdio.h>
#include<conio.h>
int max(int a,int b);
int p[10];
int w[10],n;
void main()
{
int m,optsoln,i;
clrscr();
printf("\n enter the number of objects \n");
scanf("%d",&n);
printf("\n enter weights\n");
for(i=1;i<=n;i++)
scanf("%d",&w[i]);
printf("\n enter the profits \n");
for(i=1;i<=n;i++)
scanf("%d",&p[i]);
printf("\n enter the knapsack capacity \n");
scanf("%d",&m);
optsoln=knapsack(1,m);
printf("optional solution=%d\n",optsoln);
getch();
}
int knapsack(int i,int m)
{
if(i==n)
return(m<w[n]?0:p[n]);
if(m<w[i])
return knapsack(i+1,m);
return max(knapsack(i+1,m),knapsack(i+1,m-w[i])+p[i]);
}
int max(int a,int b)
{
if(a>b)
return a;
else
return b;
}
/*OUTPUT*/
 enter the number of objects
3

 enter weights
20
25
10                                                                              
                                                                                
 enter the profits                                                              
30                                                                              
40                                                                              
35                                                                              
                                                                                
 enter the knapsack capacity
40
optional solution=75                                                            
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
