#include<stdio.h>
#include<conio.h>
int a[10][10],q[10],vis[10],n,i,j,f=0,r=-1;
void bfs(int v)
{
for(i=1;i<=n;i++)
if(a[v][i] && !vis[i])
{
q[++r]=i;
printf("%d->%d\t",v,i);
}
printf("\n");
if(f<=r)
{
vis[q[f]]=1;
bfs(q[f++]);
}
}
void main()
{
int v;
clrscr();
printf("\n Enter the number of vertices\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
q[i]=0;
vis[i]=0;
}
printf("\n Enter the graph data in matrix form\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);
printf("\n Enter the starting vertex\n");
scanf("%d",&v);
bfs(v);
printf("\n the nodes which are reachable are\n");
for(i=1;i<=n;i++)
if(vis[i])
printf("%d\t",i);
else
printf("\n bfs is not possible\n");
getch();
}
/*Output

 Enter the number of vertices                                                   
4                                                                               
                                                                                
 Enter the graph data in matrix form                                            
0 1 1 0                                                                         
1 0 0 1                                                                         
1 0 0 1                                                                         
0 1 1 0                                                                         
                                                                                
 Enter the starting vertex                                                      
1                                                                               
1->2    1->3                                                                    
2->1    2->4                                                                    
3->1    3->4
                                                                                
                                                                                
the nodes which are reachable are
1       2       3       4 */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
















                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
