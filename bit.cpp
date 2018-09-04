#include<iostream>
using namespace std;

void powerOfTwo(void)
{
	int a;
	int c = 0;
	
	cin >> a;
	
	for( ; ;a>>=1)
	{
		if(a==0)break;
		
		if(a&1==1)
		{
			c++;
		}
	}
	
	
	if(c==1)cout << "Yes" << endl;
	else cout << "No" << endl;
}

void comp(void)
{
	int a,b;
	cin >> a >> b;
	
	
}

int main(void)
{
	//powerOfTwo();
	return 0;
}
