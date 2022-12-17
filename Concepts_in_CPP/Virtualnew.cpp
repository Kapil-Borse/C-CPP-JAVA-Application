#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void fun()  {   cout<<"Base fun\n"; }     //1000
    virtual void gun()  {   cout<<"Base gun\n"; } //2000
    virtual void sun()  {   cout<<"Base sun\n"; }  //3000
	virtual void run()  {   cout<<"Base run\n"; }   //4000
};



class Derived : public Base
{
    public:
        int X,Y;
      void gun()  {   cout<<"Derived gun\n";  }      //5000
      virtual void run()  {   cout<<"Derived run\n";  }  //6000
      virtual void mun()  {   cout<<"Derived mun\n";  }  //7000
};

int main()
{
    Base *bp = NULL;
    Derived dobj;
    bp = & dobj;        // Upcasting

    bp->fun();  // Base fun
	bp->gun();  // Derived gun
	bp->sun();  // Base sun
	bp->run();  // Derived run
	//bp->mun(); //error
	
    return 0;
}
    // Assembly language mdhe honare virtual
 /*
      C++ syntax
      bp->gun();      // c++ langauge
	  
	  
	  C syntax
	  gun(bp);        // c language
	  gun(300);       // internally happes like this pointer
	  
	  
	  Assembly syntax
	  
	  PUSH 300         // Stored in the register ESI
	  MOV EAX, ESI     // EAX register contains 300
	  MOV EBX, [EAX]   // EBX contains 400
	  CALL [EBX + 0]   // CALL 5000  // call to gun function
	  
	  Binar syntax
	  
	  0100   0011  0001   0010   1100
 */