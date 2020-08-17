#include <stdio.h>
main()
{
	int num[4]={1,2,4,7},i,j,diff[6],k=0,l,m,max;
	for (i=3;i>0;i--)
	{
		for (j=i-1;j>=0;j--)
		{
			diff[k]=num[i]-num[j];
			k++;
		}
		
	}
	max=diff[0];
	for(l=1;l<=5;l++)
	{
		if (max<diff[l])
		{
			max=diff[l];
		}
	}
	printf("highest profit of %d",max);
	
}
