#include <stdio.h>
main()
{
	int i,num[6]={1,2,1,2,9,8},j;
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if (num[j]-num[i]==0)
			{
			
			printf("\nthe %d has duplicate",num[i]);
		}
		
		}
	}
}
