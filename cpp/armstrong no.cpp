#include<iostream>
using namespace std;
int main()
{
	int n,on,rem,result=0;
	cout<<"enter";
	cin>>n;
	on=n;
	while(on!=0)
	{
		rem=on%10;
		result=result+rem*rem*rem;
		on=on/10;
	}
	if(result==n)
	{
		cout<<n<<"is armstrong"<<endl;
	}
	else
	{
		cout<<n<<"not a armstrong"<<endl;
	}
	return 0;
}
