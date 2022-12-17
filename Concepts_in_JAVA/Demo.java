// class Defination
class Maths     // class Maths extends Object
{
	public int iNo1;  //characteristics
	public int iNo2;  //characteristics
	
	public Maths()   // Deafault constructor
	{
		System.out.println("Inside default constructor");
	}
	public Maths(int a, int b)  // Parametrised constructor
	{
		System.out.println("Inside parametrised constructor");
	    iNo1 = a;
		iNo2 = b;
	}

	public int Addition()   // Behaviour
	{
		int iAns = 0;
		iAns = iNo1 + iNo2;
		return iAns;
	}
	public int Substraction() // Behaviour
	{
		int iAns = 0;
		iAns = iNo1 - iNo2;
		return iAns;
	}
 }// End of Maths class

class Demo   // class Demo extends Object
{
	public static void main(String arr[])
	{
		System.out.println("Inside main function");
		
		Maths mobj1 = new Maths();
		Maths mobj2;                 // This concept is called as Reference
		mobj2 = new Maths(10,11);    //This concept is called as Reference 
		
		int iRet = 0;
		iRet = mobj1.Addition(); // Addition is 0
		
		System.out.println("Addition is : "+iRet);
	}
}