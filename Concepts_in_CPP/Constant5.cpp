#include<iostream>
using namespace std;
class Demo
{
		public:
			int i;
		const int j;      // constant characteristics
			
		// Parametrised constructor with DEFAULT values	
		Demo(int x = 10, int y = 20) : j(y)
		{
			i = x;
		 
		}
		void fun()
		{
			int a = 10;
			const int b = 20;   // constant variable
			i++;  //A  (Becaue of line no 6)
			j++;  //NA  (Becaue of line no 7)
			a++;  //A  (Becaue of line no 17)
			b++;  // NA (Becaue of line no 18)
		}
		void gun() const         // constant behaviour
		{
			int a = 10;
			const int b = 20;
			i++;  //NA (Becaue of line no 24)
			j++;  // NA (Becaue of line no 24)
			a++;  // A (Becaue of line no 26)
 			b++;  // NA (Becaue of line no 27) 
		}
};

int main()
{

	Demo obj1(11,21);   // 11  21
	const Demo obj2(11,21);  // 11  21  // Constant object
	
	obj1.fun(); // A
	obj1.gun(); // A
	obj2.fun();  // NA
	obj2.gun();  //A
	
		
	obj1.i++;   // A
	obj1.j++;   // NA
	obj2.i++;   // NA
	obj2.j++;   // NA
	
    return 0;
}