#include<iostream>
using namespace std;
class complex
{
	float x;
	float y;
	public:
		complex(){ }
		complex{float real,float imag}
		{
			x=real;
			y=imag;
		}
		complex operator+(complex);
		void display(void);
};
complex complex::operator+(complex c)
{
	complex temp;
	temp.x=x+c.y;
	return(temp);
}
void complex:: display(void)
{
	cout<<x<<" + j"<<y<<"\n";
}
int main()
{
	P p;
	p.get_m(10);
	p.get_n(20);
	p.display();
	return 0;
}
