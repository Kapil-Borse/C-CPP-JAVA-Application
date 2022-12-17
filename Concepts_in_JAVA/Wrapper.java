import java.io.*;

class Wrapper
{
	public static void main(String A[])
	{
		int no = 11;
		
		Integer iobj = new Integer(no);  //Boxing - converting premitive to wrapper
		
		System.out.println(no);
		System.out.println(iobj);
		
		int x = iobj; // Unboxing - converting wrapper to premitive
		System.out.println(x);
		
		
	}
}