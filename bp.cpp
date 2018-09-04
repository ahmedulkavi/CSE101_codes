#include <iostream>
using namespace std;
int main ()
{
	int a[100];
	int b[100];
	char c;
	int n, i=0;
	
	while (true)
	{
		cin.get(c);
		if(c=='\n') break;
		cin >> a[i];
		cin.get(c);
		cin >> b[i];
		cin.get(c);
		
		for (int j=0; j<i; j++)
		{
			if (b[j]==a[i]) 
			{
				n=a[i]; 
				a[i]=b[i];
				b[i]=n;
				for (int j=0; j<i; j++)
				{
					if (b[j]==a[i]) 
					{
						cout << "NO" << endl;
						return 0;
					}
				}
			}
			
		for (int j=0; j<i; j++)
		{
			if (a[j]==b[i]) 
			{
				n=a[i]; 
				a[i]=b[i];
				b[i]=n;
				for (int j=0; j<i; j++)
				{
					if (a[j]==b[i]) 
					{
						cout << "NO" << endl;
						return 0;
					}
				}
			}
		}
			
		
		}
		i++;
	}
	cout << "YES" << endl;
		
}
	return 0;
