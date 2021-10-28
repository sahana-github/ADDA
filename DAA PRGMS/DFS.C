 #include<stdio.h>
 #include<conio.h>
 int a[10] [10], vis[10],n;
 void dfs(int v)
 {
 int i,j;
 vis[v]=1;
 for(j=1;j<=n;j++)
 {
 if(a[v][i] && !vis[i])
 {
 printf("\n%d->%d",v,i);
 dfs(i);
 }
 }
 }
 void main()
 {
 int v,i,j,Cnt=0;
 clrscr();
 printf("\n Enter the no of vertices\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 vis[i]=0;
 for(j=1;j<n;j++)
 a[i] [j]=0;
 }
 printf("\n Enter the graph data in matrix form");
 for(i=1;i<=n;i++)
 for(j=1;j<=n;j++)
 scanf("%d",&a[i][j]);
 printf("enter the starting matrix\n");
 scanf("%d",&v);
 dfs(v);
 printf("\n");
 for(i=1;i<=n;i++)
 {
 if(vis[i])
 Cnt ++;
 }
 if(Cnt==n)
 printf("\n graph is connected\n");
 else
 printf("\n graph is not connected\n");
 getch();
 }


