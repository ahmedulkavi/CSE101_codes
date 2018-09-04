#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n,b=0;
	
	bool sw;
	
	while(!cin.eof())
	{
		cin >> n;
		
		int a[n];
		
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				sw = false;
				if(a[j]>a[j+1])
				{
					swap(a[j],a[j+1]);
					b++;
					sw = true;
				}
				
			}
			
			if(sw==false)break;
		}
		
		
		printf("Minimum exchange operations : %d\n",b);
		b = 0;
	}
	
	return 0;
}
