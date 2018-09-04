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
	int x,a,b;
	bool t = false,u = false;
	
	cout << "Please enter a positive integer greater than 3: ";
	
	cin >> x;
	
	if(x<=3)
	{
		cout << "Invalid input" << endl;
		return 0;
	}
	
	for(int i=x;i>=4;i--)
	{
		for(int j=2;j<=sqrt(i);j++)
		{
			if(isPrime(j) && j*j==i)
			{
			 	a = i;
			 	u = true;
			 	break;
			}
		}
		
		if(u) break;
	}
	
	for(int i=x; ;i++)
	{
		for(int j=2;j<=sqrt(i);j++)
		{
			if(isPrime(j) && j*j==i)
			{
				b = i;
				t = true;
				break;
			}
		}
		
		if(t) break;
	}
	
	cout << a << " <= " << x << " <= " << b << endl;
	
	return 0;
} 
