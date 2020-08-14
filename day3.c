#include <stdio.h>
void main()
{int num[5]={10,20,25,30,35},place,targetval,i,k;
printf("The element to be checked: ");
scanf("%d",&targetval);
if(targetval>=10)
{
for(i=5;i>=1;i--)
{   if(num[i-1]==targetval)
     {
	 printf("-------PRESENT--------");
	 break;
}
     else
     {
	 printf("-------NOT PRESENT-------\n");
	 if(i==1)
	 {
	 for(k=5;targetval<num[4]&&targetval>num[0]&&k>=1;k--)
	 {     if(targetval<num[k-1]&&targetval>num[k-2])
	 {   place=k-1;
	 printf("%d",place);
	 }else{
	 }
	
	 }printf("5");
	 
}else{
}
}

}
}else
{

printf("------NOT ALLOWED TO CHECK-------");
}
}


