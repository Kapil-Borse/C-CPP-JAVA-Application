#include<iostream>
using namespace std;

class Base
{
	public:                         // Access specifier
		int A,B;
		
		void fun()                  // Function definition
		{
			cout<<"Base fun\n";
		}
		void gun(int i)            // Function definition 
		{
			cout<<"Base gun with one integer\n";
		}
		void gun(int i, int j)     // Overloaded function definition
		{
			cout<<"Base gun with 2 integers\n";
		}
};

class Derived : public Base
{
	public:
		int X,Y;
		void sun()
		{
			cout<<"Derived sun\n";
		}
		void fun(int i)
		{
			cout<<"Derived fun\n";
		}
};




int main()
{
	Derived dobj;
	
	dobj.Base::fun();   // Base mdhla fun() call honar
	dobj.gun(11);
	dobj.gun(11,21);
	dobj.sun();
	
	return 0;
}