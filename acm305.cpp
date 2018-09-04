#include<iostream>
using namespace std;

int exec(int n,int m)
{
	int c=0;
	
	while(n>1)
	{
		for(int i=0;i<n;i++)
		{
			if(i==m)
			{
				c++;
				n--;
			}
			
			if(n==1) break;
		}
	}
	
	return c;
}

int main(void)
{
	int k;	
	
	cin >> k;
	
	cout << exec(k,5) << endl;
	
	return 0;
}
