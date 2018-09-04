#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main(void)
{
	int c,n;
	double avg=0,b=0;
	
	scanf("%d",&c);
	
	for(int i=0;i<c;i++)
	{
		scanf("%d",&n);
		
		int a[n];
		
		for(int j=0;j<n;j++)
		{
			cin >> a[j];
		}
		
		for(int j=0;j<n;j++)
		{
			avg+=a[j];
		}
		
		avg/=n;
		
		for(int j=0;j<n;j++)
		{
			if(a[j]>avg)b++;
		}
		
		b = (b/n)*100;
		
		printf("%0.3lf%\n",b);
		
		avg = 0;
		b = 0;
	}
	
	return 0;
}
