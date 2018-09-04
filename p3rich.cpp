/* Syed Ahmedul Kavi
   17/4/18
   This program reads a list of inputs and outputs whether the number is rich,perfect or abundant
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(void)
{
	int n,a = 0; // n is the input, a is sum of divisors
	
	cout << "PLease enter a list of integers that end with 0:" << endl;
	
	cin >> n;
	
	while(n!=0)
	{
		
		for(int i=1;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
			 	a+=i;
			 	a+= n/i;
			 	
			 	if(i==n/i) a-=i; 
			}
		}

		
		if(a < 2*n) cout << n << " is deficient" << endl;

		else if(a==2*n) cout << n << " is perfect" << endl;

		else cout << n << " is abundant" << endl;
		
		a = 0;
		
		cout << "PLease enter a list of integers that end with 0:" << endl;

		cin >> n;
			
	}
	return 0;
}
