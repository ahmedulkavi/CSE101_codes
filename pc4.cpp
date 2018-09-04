#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		
		
		int *a = new int [n];
		
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		sort(a,a+n);
		
		for(int i=0;i<n;i++)
		{
			if(i==n-1)
			{
				printf("%d\n",a[i]);
				break;
			}
			printf("%d ",a[i]);
		}
		
		
		delete[] a;
	}
	
	return 0;
}
