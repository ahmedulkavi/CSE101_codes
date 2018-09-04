#include<iostream>
using namespace std;

int main(void)
{
	int T,n;
	cin >> T;
	for(int i=0;i<T;i++)
	{
		cin >> n;
		if(n<=10)
		{
			cout << 0 << " " << n << endl;
		}
		
		else
		{
			cout << 10 << " " << n-10 << endl;
		}
	}
	return 0;
}
