#include<stdio.h>
int count(int a[][10],int n,int m)
{
	int i,j,count=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==0)
			{
				count++;
			}
    	}
    }
    return count;
}
void check(int count,int n,int m)
{
	if(count>=((m*n)/2))
		{
			printf("Matrix is a sparse matrix");
		}
}
int convert(int a[][10],int n,int m,int count)
{
	int i,j,k,c1,b[10][10];
	k=0;
	c1=(m*n)-count;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]!=0)
			{
				b[k][0]=i;
				b[k][1]=j;
				b[k][2]=a[i][j];
				k++;
			}
	    }
	}
	return b,c1;
}
void print(int b[][10],int n,int m,int c1)
{
	int i,j;
	printf("\nThe elements in matrix are :\nR  C  ELE\n");
	for(i=0;i<c1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
}
void main()
{
	int x[10][10],y[10][10],d[10][10],f,i,j,p,q,c;
	printf("Enter the number of rows and columns of the arrays : ");
	scanf("%d%d",&p,&q);
	printf("Enter the elements of array 1 : ");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("Enter the elements of array 2 : ");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&y[i][j]);
		}
	}
	c=count(x,p,q);
	check(c,p,q);
	d,f=convert(x,p,q,c);
	print(d,p,q,f);
}
