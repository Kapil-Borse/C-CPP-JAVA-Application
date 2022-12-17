#include<iostream>

using namespace std;

class Demo
{
	public:
		int i;
		float f:
		double d;
	
	void fun(int A)

	{
		cout<<"Inside fun\n";
	}	

	int gun (int A, int B)
	
	{
		cout<<"Inside gun\n";	
	}
	
};	
int main()
{
  
	Demo obj1;
	Demo obj2;
	 obj1.i = 101;
    obj2.i = 201;

    obj1.fun(11);    
    obj2.fun(11); 
  

    return 0;
}