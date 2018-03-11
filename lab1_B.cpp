#include <iostream>
using namespace std;

int main()
{
   int n;   //n to be read from user
   
   while( 1 )     //can input n for infinite time
   {
      cout << "Please enter an integer: ";
      cin >> n;     //read n form user
      cout << "\nFollowing is the corresponding sequence of numbers:" << endl;

      if( n == 1 )   //base case to print out 1 directly
      {
         cout << n << endl;	   
      }
      else   //other cases
      {
         while( n != 1 )
         {
            if( n % 2 != 0 )   //if n is odd
	    {
               cout << n << " ";
               n = 3 * n + 1;	    
	    }
            else   //if n is even
	    {
               cout << n << " ";
               n /= 2;	    
	    }   	 
         }	
         cout << n << endl;   //after calculating, n is 1 and print it out
      }      
   }
   return 0;
}


