#include<iostream>
using namespace std;
class complex
{
	int a,b;
	public:
		void get()
		{
			cout<<"enter values for a and b"<<endl;
			cin>>a>>b;
		}
		void put()
		{
			cout<<"the value of a+ib is"<<a<<"+"<<"i"<<b<<endl;
		}
		friend int add(complex);
};
int add(complex aa)
{
	
	return(aa.a+aa.b);
}
int main()
{
	complex aa;
	aa.get();
	aa.put();
	cout<<"add is"<<add(aa)<<endl;
	return 0;
}
