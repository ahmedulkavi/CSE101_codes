#include<iostream>
using namespace std;

int main(void)
{
	int n,m=0;
	
	cin >> n;
	
	int **avn;
	
	int *node;
	
	node = new int [n];
	
	avn = new int* [n];
	
	for(int i=0;i<n;i++)
	{
		avn[i] = new int[n];
	}
	
	for(int k=0;k<n;k++)
	{
		node[k]=0;
	}
	
	for(int i=0,k=0;i<n,k<n;i++,k++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> avn[i][j];
			
			if(avn[i][j]==1 && i==j)
			{
			 	cout << "NO" << endl;
			 	m++;
			 	break;
			}
			else if(avn[i][j]==1)
			{
				if(node[k]==node[j] && node[j]==0) node[j]=1;
				
				else if(node[k]==node[j] && node[j]==0)
				{
					 cout << "NO" << endl;
					 m++;
					 break;
				}
			}
			
			else continue;
			
			
		}
		
		if(m==1) break;
		
	} 
	
	if(m==0) cout << "Yes" << endl;
	
	for(int i=0;i<n;i++)
	{
		delete [] avn[i];
	}
	
	delete [] avn;
	
	delete [] node;
	
	return 0;
}
