#include<iostream>
using namespace std;

int main(void)
{
	int c,s,r;
	
	cin >> r;
	
	for(int i=0;i<r;i++)
	{
		for(int s=1;s<=r-i;s++) cout << " ";
	
		for(int j=0;j<=i;j++)
		{
			if(j==0 || i==0)
				c = 1;
				
			else
				c = c*(i-j+1)/j;
				
			cout << c << "  ";
		}
		
		cout << endl;
	}
	
	return 0;
}
