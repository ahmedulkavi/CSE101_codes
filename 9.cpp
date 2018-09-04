#include<iostream>
#include<cmath>
																														
using namespace std;

int main(void)
{
	int n,i,p;
	cin >> n;
	p=0;
	
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			cout << i << endl; 
			if (n/i != i) cout << (n/i) << endl;
			else p=p-1;
			p=p+2;
		}
			
	}		
		
			
		if(p==0)
		{
			cout << n << " is prime" << endl;
		}
		
		cout << "There are " << p << " factors" << endl;
		
		
	
	
	return 0;
}
