#include<iostream>
using namespace std;

int add(int *a)
{
	int s=0;
	for(int i=0;i<10;i++)
	{
		s+=a[i];
	}
	
	return s;
}

int main(void)
{
	int a[10];
	int s=0;
	
	for(int i=0;i<10;i++)
	{
		a[i] = i;
	}
		
	s = add(a);
	
	cout << s << endl;
	
	return 0;
}
