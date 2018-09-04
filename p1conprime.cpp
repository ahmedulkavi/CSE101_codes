#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n)
{
	bool p = false;
	
	if(n==1) return false;
	
	else if(n==2 || n==3) return true;
	
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0) 
			{
				p = false;
				break;
			}
			
			else
			{
				p = true;
			}
		}
	}
	
	return p;
}

int main(void)
{
	
	int a,b;
	cout << "Please enter two integers separated by spaces: ";
	
	cin >> a >> b;
	
	cout << "The primes between " << a << " and " << b << " are: ";
	
	if(a<b)
	{
		for(int i=a;i<=b;i++)
		{	
			if(isPrime(i))
			{
				cout << i << " ";
			}
		}
	}
	
	else
	{
		for(int i=b;i<=a;i++)
		{	
			if(isPrime(i))
			{
				cout << i << " ";
			}
		}
	}
	
	cout << endl;
	
	return 0;
}
