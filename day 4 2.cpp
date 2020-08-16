#include <stdio.h>
main()
{
	int n,sum=0,i,k=0;
	printf("Put the desired no.: ");
	scanf("%d",&n);
	if (n>0)
	{
		if (n<10)
		{
			printf("%d",n);
		}
		else { 
		while(n!=0)
		{
		for(i=10;n!=0;)
		{
			sum=(n%i)+sum;
			
			n=n/10;
			
		}
		n=sum;
		printf("\n%d",n);
		sum=k;
		if (n<10)
		{
			break;
		}
		else
		{
		}
		
	}
}
		
	}
	else {
	if (n==0)
	{
		printf("0");
	}
	else
	{ printf("not a coveted response");
	}
}
	
}
