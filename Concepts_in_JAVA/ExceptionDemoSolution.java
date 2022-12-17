import java.util.*;

class ExceptionDemoSolution
{
	public static void main(String arr[])
	{
		Scanner sobj  = new Scanner(System.in);
		int iNo1 = 0,iNo2 = 0,iAns = 0;
		System.out.println("Enter first number");
		iNo1 =sobj.nextInt();
		System.out.println("Enter Second number");
		iNo2 =sobj.nextInt();
		
		try  // jithe error yetil ass vattat tya part la try mdhe liha
		{
			System.out.println("Inside try block");
			iAns = iNo1 / iNo2;
			System.out.println("Division is :"+iAns);

		}
		catch(ArithmeticException obj)     // Exception aal tarach catch call hot
		{
			System.out.println("Inside catch 1");
			System.out.println(obj);
		}
		catch(NullPointerException obj)
		{
			System.out.println("Inside catch 2");
			System.out.println(obj);
		}
		catch(Exception obj) // catch like MSDhoni la sarvat mage theva
		{
			System.out.println("Inside catch 3");
			System.out.println(obj);
		}
		finally      // exception aal kiva nahi aal tari finally call hotoch
		{
					System.out.println("Inside finally block");
					sobj.close();
		}
		
	}
}