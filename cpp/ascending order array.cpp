#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i,j,temp;
	cout<<"array elments are";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[j]>arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(i=0;i<5;i++){
		cout<<arr[i];
	}
	return 0;
}
