#include <stdio.h>
main()
{
	int n,sum=0,i;
	printf("Put the desired no.: ");
	scanf("%d",&n);
	if (n>0)
	{
		if (n<10)
		{
			printf("%d",n);
		}
		else {
		for(i=10;n!=0;i=i*10)
		{
			sum=(n%i)+sum;
			
			n=n/10;
			
		}
		n=sum;
		printf("%d",n);
	}
		
	}
	else if (n==0)
	{
		printf("0");
	}
	else
	{ printf("not a coveted response");
	}
	
}
