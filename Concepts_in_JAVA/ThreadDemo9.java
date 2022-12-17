
class Demo extends Thread
{
	public void run()
	{
		int i = 0;
		for(i = 1; i <= 10; i++)
		{
			try
			{
				System.out.println(Thread.currentThread().getName()+":"+i);
				Thread.sleep(500);
			}
			catch(InterruptedException obj)
			{}
		}
	}
}

class ThreadDemo9
{
	public static void main(String A[]) throws InterruptedException
	{
		System.out.println("Inside main thread");
		Demo obj1 = new Demo();
		Demo obj2 = new Demo();
		
		Thread t1 = new Thread(obj1);
		Thread t2 = new Thread(obj2);
		
		t1.setName("First");
		t2.setName("Second");
		
		System.out.println("Priority of t1 is:"+t1.getPriority());
		System.out.println("Priority of t2 is:"+t2.getPriority());
		
		t1.start();  // it is a request ani he waiting mdhe astat ani internally run() method la call karte
		t2.start();   // runnable ahet mhnje schedule ahet(running mdhe kevha janar he schedular tharvto)
		
		t1.join();  // he kelyane End of main thread last la display jhala
		t2.join();   //t1 ani t2 jhalya nntr pudhe run hou dete
		
		System.out.println("End of main thread");
	}
}