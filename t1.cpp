#include<iostream>
using namespace std;

int main(void)
{
	int m,n,a,r=0;
	
	cin >> m >> n;
	
	a=(m*n)-2;
	
	for( ; ; )
	{
		a = a-2;
		
		if(a<2)break;
		else r++;
	}
	
	cout << r << endl;
	
	return 0;
}
