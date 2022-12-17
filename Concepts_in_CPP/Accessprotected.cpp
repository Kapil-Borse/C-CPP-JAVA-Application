#include<iostream>
using namespace std;

class Base  // 12 byte
{
		
	public:
		int i;
	private:
		int j;
	protected:
		int k;
		
	public:	
		Base()
		{
			i = 10;
			j = 20;
			k = 30;
		}
	
};

class Derived : public Base // 12 byte
{
		public:
			void fun()
			{
				cout<<"Value of public i of Base : "<<i<<"\n";
				//cout<<"Value of private j of Base : "<<j<<"\n";
			    cout<<"Value of protected k of Base : "<<k<<"\n";
			}
};

int main()
{
	    //Static memory
		Derived dobj;              // Dynamic memory
		dobj.fun();
						            //Derived * ptr = NULL;
		                            //ptr = new Derived;
		
		                            //ptr-> fun();
		
		                             //delete ptr;
	return 0;
}