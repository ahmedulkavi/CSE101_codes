#include<iostream>
#include<cmath>
																														
using namespace std;

int main(void)
{
	int n,i,p;
	cin >> n;
	if(n==1||n==2)
	{
		cout << n << " is prime" << endl;
	}
	
	else
	{
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				p=0;
			}
			
			
		}
			
		if(p==0)
		{
			cout << n << " is not prime" << endl;
		}
		
		else
		{
			cout << n << " is prime" << endl;
		}
			
	}
	
	return 0;
}
