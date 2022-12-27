#include<stdio.h>
int main()
{
	int a[]={1,3},b[]={2};
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
	int x=m+n,i;
	double c[x];
	for(i=0;i<x;i++)
	{
		if(i<m)
			c[i]=a[i];
		else
			c[i]=b[i-m];
	}
	for(i=0;i<x;i++)
	{
		int tmp,j;
		for(j=0;j<x;j++)
		{
			if(c[i]>c[j])
		{
			tmp=c[i];
			c[i]=c[j];
			c[j]=tmp;
		}
		}
	}
	if(x%2!=0)
	{
		int r=(x-1)/2;
		printf("%.2f ",c[r]);
	}
	else
	{
		int q=(x-1)/2;
		int w=(x+1)/2;
		printf("%.2f ",(c[q]+c[w])/2);
	}
	return 0;
}
