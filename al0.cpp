#include<iostream>
using namespace std;

int maxim(int *arr,int &m,int n)
{
	int loc = 0;
	
	for(int i=0;i<n;i++)
	{
		if(m<arr[i])
		{
			m=arr[i];
			loc=i;
		}
	}
	
	return loc;
}

int main(void)
{
	int n=5,m,loc;
	
	int arr[5]={1,2,3,4,5};
	
	m = arr[0];
	
	loc = maxim(arr,m,n);
	
	cout << m << endl;
	
	cout << loc << endl;
	
	return 0;
	
}
