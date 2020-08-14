#include <stdio.h>
main()
{
 int num[5]={1,4,7},target,i,j,k=i+1;
	float size=12/sizeof(2);
	printf("enter target required: ");
	scanf("%d",&target);
	for(i=0;i<size;i++)
	{     if(target!=num[i]){
		if(target>num[i]&&target>num[i+1])
		{
			printf("when palaced would be on %d\n ",k);
		}else if(target<num[0]){
			printf("at 0 index\n");
			break;
		}
		else if(target>num[size-1]){
		
		printf("at %d \n",size);
		break;
	}
	
}
