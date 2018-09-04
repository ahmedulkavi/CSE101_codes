#include<iostream>
using namespace std;

int cycle(int n)
{
	int c=0;	
	
	x:
	
	//cout << n << endl;
	
	c++;
	
	if(n==1)
	{
		return c;
	}
	
	if(n%2!=0) n= 3*n+1;
	
	else n = n/2;
	
	goto x;
}

int main(void)
{
	int i,j,m,max;
	
	cin >> i >> j;
	
	m = j-i+1;
	
	int *a = new int [m];
	
	for(int k=i,l=0;k<=j,l<m;k++,l++)
	{
		a[l] = cycle(k);
	}
	
	max = a[0];
	
	for(int k=0;k<m;k++)
	{
		if(a[k]>max) max = a[k];
	}
	
	cout << i << " " << j << " " << max << endl;
	
	delete [] a;
	
	return 0;
}
