
class ThreadDemo10
{
	public static void main(String A[])
	{
		System.out.println("Inside main method");
		
		System.out.println("Name of current thread is:"+Thread.currentThread().getName());
		
		System.out.println("Priority of current thread isis:"+Thread.currentThread().getPriority());
	}
}