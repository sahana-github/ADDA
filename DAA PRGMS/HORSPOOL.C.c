#include<stdio.h>
#include<string.h>
#define MAX 500

    int s[MAX];

    void shifttable(char p[]) 
   {
    	int i,j,m;
    	m=strlen(p);
    	for (i=0;i<128;i++)
    	  s[i]=m;
    	for (j=0;j<m-1;j++)
    	  s[p[j]]=m-1-j;
    }

    int horspool(char t[],char p[])
    {
    	int i,j,k,m,n;
    	n=strlen(t);
    	m=strlen(p);
    	printf("\nLength of text=%d",n);
    	printf("\nLength of pattern=%d",m);
    	i=m-1;
    	while(i<n) {
    		k=0;
    		while((k<m)&&(t[i-k]==p[m-1-k]))
    		   k++;
    		if(k==m)
    		   return(i-m+1); 
		else
    		   i+=s[t[i]];
    	}
    	return -1;
    }

    void main()
 {
    	char src[100],p[100];
    	int pos;
    	printf("Enter the text in which pattern is to be searched:\n");
    	gets(src);
    	printf("Enter the pattern to be searched:\n");
    	gets(p);
    	shifttable(p);
    	pos=horspool(src,p);
    	if(pos>=0)
    	  printf("\nThe desired pattern was found starting from position %d\n",pos+1); 
        else
    	  printf("\nThe pattern was not found in the given text\n");
  
    }