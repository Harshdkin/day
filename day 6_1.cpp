#include<stdio.h>
int main()
{
	int n,k,j,l,i,ndig,kdig,m;
	int num[dig];
	printf("Enter the no.s: ");
	scanf("%d%d%d%d",&n,&ndig,&k,&kdig);
	m=n;
	for(i=0;n!=0;i++)
	{
	num[i]=n%10;
		n=n/10;
		printf("%d",num[i]);
	}
	j=m+k;
	for(l=0;j!=0;l++)
	{
		num[l]=n%10;
		n=n/10;
		printf("%d",num[l]);
	}
}
