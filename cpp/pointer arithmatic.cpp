#include<iostream>
using namespace std;
int main()
{
	int num[]={10,20,30,40,50,60,70};
	int *ptr;
	cout<<"the array values are"<<endl;
	for(int i=0;i<8;i++)
		cout<<num[i]<<endl;
		ptr=num;
		cout<<"value of pointer"<<*ptr<<endl;
		ptr++;
		cout<<"value of ptr++"<<*ptr<<endl;
		ptr--;
		cout<<"value of ptr--"<<*ptr<<endl;
		ptr+=2;
		cout<<"value of ptr+=2"<<*ptr<<endl;
		ptr=ptr-1;
		cout<<"value of ptr=ptr-1 is"<<*ptr<<endl;
		ptr+=2;
		cout<<"value of ptr+=2 is"<<*ptr<<endl;
}

