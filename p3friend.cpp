#include<iostream>
using namespace std;

int digisum(int n)
{
	int s=0,a;
	
	while(n!=0)
	{
		a = n%10;
		n/=10;
		s+=a;
	}
	
	return s;
}

int lastInSequence(int n)
{
	while(n/10!=0)
	{
		n = digisum(n);
	}
	
	return n;
}

int main(void)
{
	int a,b,c,d;
	
	cout << "Enter two integers: ";
	
	cin >> a >> b;
	
	if(a<=0 || b<=0) 
	{
		cout << "Invalid input" << endl;
		return 0;
	}
	
	c = lastInSequence(a);
	
	d = lastInSequence(b);
	
	if(c==d) cout << a << " and " << b << " are friends" << endl; 
	
	else  cout << a << " and " << b << " are not friends" << endl; 
	
	return 0;
}
