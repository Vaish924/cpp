#include<iostream>
using namespace std;
int main()
{
	int n;
	float sum=0,avg;
	cout<<"enter no of terms"<<endl;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	avg=sum/n;
	cout<<"the avg of no is"<<avg;
	cout<<endl;
	return 0;
}
