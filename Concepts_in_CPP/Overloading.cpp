#include<iostream>
using namespace std;

class Overloading
{
	public:
		int Add(int a, int b)
		{
			
			cout<<"Addition of integers\n";
		}
		
		float Add(float a, float b)
		{
			cout<<"Addition of floats\n";
		}
		
		double Add(double a, double b)
		{
			cout<<"Addition of double\n";
		}
	
}


int main()
{
  
   return 0;
}