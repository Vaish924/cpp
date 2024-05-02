#include<iostream>
using namespace std;
int main()
{
	int num[]={56,34,54,22,18,19};
	int *ptr;
	int i;
	cout<<"the array values are";
	for(i=0;i<5;i++)
	{
		cout<<num[i]<<endl;
	}
	ptr=num;
	cout<<"value of ptr"<<*ptr;
	ptr++;
	cout<<"value of ptr++"<<*ptr;
	ptr--;
	cout<<"value of ptr--"<<*ptr;
	ptr=ptr+2;
	cout<<"value of ptr+2"<<*ptr;
	ptr=ptr-1;
	cout<<"value of ptr-1"<<*ptr;
	ptr+=3;
	return 0;
}
