#include<iostream>
using namespace std;
class B;
class A
{
	int a;
	public:
		void input()
		{
			cout<<"enter number"<<endl;
			cin>>a;
		}
		friend void max(A,B);
};
class B
{
	int b;
	public:
		void input()
		{
			cout<<"enter number"<<endl;
			cin>>b;
		}
		friend void max(A,B);
};
void max(A aa,B bb)
{
	if(aa.a>bb.b)
	cout<<"a is greater"<<endl;
	else
	cout<<"b is greater"<<endl;
}
int main()
{
	A aa;
	B bb;
	aa.input();
	bb.input();
	max(aa,bb);
	return 0;
}
