/* Syed Ahmedul Kavi
   17/4/18
   Determines whether a number is prime or not 
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(void)
{
	unsigned long int n; // inputs the number
	bool p=false; // checks whether the number is prime
	
	cout << "Enter an positive integer:" << endl;
	
	cin >> n;
	
	if(n==1) cout << n << " is not prime" << endl;
	
	else if(n==2) cout << n << " is prime" << endl;
	
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				p = false;
				break;
			}
			
			else p= true;
		}
		
		if(p) cout << n << " is prime" << endl;
		
		else cout << n << " is not prime" << endl;
	}
	
	return 0;
	
}
