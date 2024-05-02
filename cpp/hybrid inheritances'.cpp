#include<iostream>
using namespace std;
class student
{
	protected:
		int roll_no;
	public:
		void get_number(int a)
		{
			roll_no=a;
		}
		void put_number(void)
		{
			cout<<"roll no"<<roll_no<<endl;
		}
		
};
class test:public student
{
	protected:
		float part1,part2;
		public:
		void get_marks(float x,float y)
		{
			part1=x;
			part2=y;
		}
		void put_marks()
		{
			cout<<"marks for part1 and part 2"<<part1<<part2<<endl;
		}
};
class sports
{
	protected:
		float score;
		public:
	void get_score(float x)
	{
		score=x;
	}
	void put_score()
	{
		cout<<"the score is"<<score<<endl;
	}
};
class result:public test,public sports
	{
		float total;
		public:
			void display(void);
	};
void result::display(void) 
{
	total=part1+part2+score;
	put_number();
	put_marks();
	put_score();
	cout<<"total score"<<total<<endl;
}
int main()
{
	result student_1;
	student_1.get_number(20);
	student_1.get_marks(27.5,33.0);
	student_1.get_score(6.0);
	student_1.display();
	return 0;
}

//output
roll no20
marks for part1 and part 227.533
the score is6
total score66.5

--------------------------------
Process exited after 0.5603 seconds with return value 0
Press any key to continue . . .


