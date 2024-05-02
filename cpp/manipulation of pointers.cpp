#include<iostream>
using namespace std;
int main()
{
	int a=4;
	int *ptr1,**ptr2;
	ptr1=&a;
	ptr2=&ptr1;
	cout<<"value of a is"<<*ptr1<<endl;
	cout<<"the changed value of a is"<<endl;
	*ptr1=(*ptr1)/2;
	cout<<"the changed value of a is"<<*ptr1<<endl;
	return 0;
}
