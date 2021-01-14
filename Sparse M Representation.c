#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],count=0,i,j,k,n,m,c;
	printf("Enter the number of rows and columns of the arrays : ");
	scanf("%d%d",&n,&m);
	printf("Enter the elements of array : ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
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
	if(count>=((m*n)/2))
		{
			printf("It is a sparse matrix");
		}
	k=0;
	c=(m*n)-count;
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
	printf("\nThe elements are :\nR  C  ELE\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
}
