#include<iostream>
using namespace std;

class Demo
{
	
	public:
		int i;   //instance(Object) variables
		int j;	 //instance(Object) variables
		static int k;  //class Variables
		static int l;  //class Variables
		Demo()
		{
			i = 0;
			j = 0;
		}
		Demo(int a, int b)
		{
			i = a;
			j = b;
			
		}
		
		void fun()
		{
			cout<<"Inside non static method fun\n";
			cout<<"Value of i :"<<this->i<<"\n";
			cout<<"Value of j :"<<this->j<<"\n";
			
			cout<<"Value of k : "<<k<<"\n";
			cout<<"Value of l: "<<l<<"\n";
			
		}
		
		static void gun()
		{
			cout<<"Inside static method gun\n";
			cout<<"Value of k :"<<k<<"\n";
			cout<<"Value of l:"<<l<<"\n";
		}
		
};

  int Demo::k = 0; //load time variable
  int Demo::l = 0; //load time variable
  
  
  int main()
{
	cout<<"Inside main\n";
	cout<<"Value of k : "<<Demo::k<<"\n";
	cout<<"Value of l: "<<Demo::l<<"\n";	
	Demo::gun();
	Demo obj1(10,11);
	Demo obj2(20,21);
	Demo obj3;
	
	cout<<"Value of i in obj1 : "<<obj1.i<<"\n";
	cout<<"Value of i in obj2 : "<<obj2.i<<"\n";
	
	cout<<"Value of j in obj1 : "<<obj1.i<<"\n";
	cout<<"Value of j in obj1 : "<<obj2.i<<"\n";
	
	obj1.fun();
	obj2.fun();
	return 0;
}
