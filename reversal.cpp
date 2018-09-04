#include<iostream>

using namespace std;

int main(void)
{
	int n,p;
	cin >> n;
	p=n%10;
	cout << p;
	n/=10;
	while(n!=0)
	{
		p=n%10;
		cout << p;
		n/=10;
	}
	cout << endl;
	return 0;
}
