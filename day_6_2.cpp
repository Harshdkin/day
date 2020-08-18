#include<stdio.h>
#include<iostream>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int d,m,y,ly,tat,ans;
	tat=0;
	cout<<"\n Enter date :";
	cin>>d>>m>>y;
	ly=y/4;
	tat=(ly*366)+(y-ly)*365;
	
	if (m>=2)
	tat=tat+31;
	
	if ((m>=3)&&(y%4==0))
	tat=tat+29;
	
	else
	tat=tat+28;
	
	if (m>=4)
	tat=tat+31;
	
	if (m>=5)
	tat==tat+30;
	
	if (m>=6)
	tat=tat+31;
	
	if (m>=7)
	tat=tat+30;
	   
	   if (m>=8)
	tat=tat+31;
	
		if (m>=9)
	tat=tat+31;
	
		if (m>=10)
	tat=tat+30;
		
	if (m>=11)
	tat=tat+31;
	
		if (m==12){                   //Starting day 1st January 0001
	tat=tat+30;                       //Let's assume input date
}                                     
	tat=tat+d;
	ans=(tat-2)%7;
	switch(ans)
	{
		case 1:cout<<"Sunday";
		 break;
			case 2:cout<<"Monday";
			 break;
			case 3:cout<<"Tuesday";
			 break;
				case 4:cout<<"Wednesday";
				 break;
					case 5:cout<<"Thursday";
					 break;
						case 6:cout<<"Friday";
						 break;
							default:cout<<"Saturday";
							 break;
			
	}
	return 0;
		
}
