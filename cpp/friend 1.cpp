#include<iostream>
using namespace std;
class it
{
	int a,b;
	public:
		void getdata()
		{
			cout<<"enter values for a and b"<<endl;
			cin>>a>>b;
		}
		friend int sum(it);
};
int sum(it aa)
{
	return (aa.a+aa.b);
}
int main()
{
	it aa;
	aa.getdata();
	cout<<"the sum is"<<sum(aa);
	return 0;
}
