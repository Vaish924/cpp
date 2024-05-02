#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		friend class B;
		void get()
		{
			cout<<"enter value for a and b"<<endl;
			cin>>a>>b;
		}
};
class B
{
	public:
		void put(A aa)
		{
			cout<<"the values are"<<aa.a<<endl<<aa.b<<endl;
		}
};
int main()
{
	A aa;
	B bb;
	aa.get();
	bb.put(aa);
	return 0;
}
