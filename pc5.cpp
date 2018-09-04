#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int t=1,n,q,l,r,m;
	
	bool z;
	
	while(scanf("%d%d",&n,&q)!=EOF)
	{
		int *a = new int[n];
		int *b = new int[q];
		
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		for(int i=0;i<q;i++)
		{
			scanf("%d",&b[i]);
		}
		
		sort(a,a+n);
		
		printf("CASE# %d:\n",t);
		
		for(int i=0;i<q;i++)
		{
			z = false;
			l = 0;
		
			r = n-1;
			while(l<=r)
			{
				m = (l+r)/2;
				
				if(a[m]==b[i])
				{
					printf("%d found at %d\n",b[i],m+1);
					z = true;
					break;
				}
				
				else if(a[m]<b[i])
				{
					l = m+1;
				}
				
				else r = m-1;
			}
			
			if(z==false) printf("%d not found\n",b[i]);
		}
		
		delete [] a;
		delete [] b;
		
		t++;
	}
	
	return 0;
}
