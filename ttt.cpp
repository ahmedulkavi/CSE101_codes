#include<iostream>
using namespace std;

int main(void)
{
	int n,count=0;
	char a[9];
	
	for(int i=0;i<9;i++)
	{
		a[i]='-';
		cout << a[i] << " ";
		if((i+1)%3==0)cout << endl;
	}
	
	while(true)
	{
		cout << "Enter your position: 1-9" << endl;
		cin >> n;
		if (a[n-1]=='X'||a[n-1]=='O')
		{
			cout << "Invalid position" << endl;
			continue;
		}
		a[n-1]='X';
		
		for(int i=0;i<9;i++)
		{
			if(a[i]=='-')
			{
				a[i]='O';
				break;
			}
		}
		
		for(int i=0;i<9;i++)
		{
			cout << a[i] << " ";
			if((i+1)%3==0)cout << endl;
		}
		
		count++;
		
		if((a[0]==a[1]&&a[1]==a[2]&&a[0]=='X')||
		   (a[0]==a[4]&&a[4]==a[8]&&a[0]=='X')||
		   (a[3]==a[4]&&a[4]==a[5]&&a[3]=='X')||
		   (a[6]==a[7]&&a[7]==a[8]&&a[6]=='X')||
		   (a[0]==a[3]&&a[3]==a[6]&&a[0]=='X')||
		   (a[1]==a[4]&&a[4]==a[7]&&a[1]=='X')||
		   (a[2]==a[5]&&a[5]==a[8]&&a[2]=='X')||
		   (a[2]==a[4]&&a[4]==a[6]&&a[2]=='X'))
		  {
		  	cout << "You Win" << endl;
		  	return 0;
		  }
		  
		  else if((a[0]==a[1]&&a[1]==a[2]&&a[0]=='O')||
		          (a[0]==a[4]&&a[4]==a[8]&&a[0]=='O')||
		          (a[3]==a[4]&&a[4]==a[5]&&a[3]=='O')||
		          (a[6]==a[7]&&a[7]==a[8]&&a[6]=='O')||
		          (a[0]==a[3]&&a[3]==a[6]&&a[0]=='O')||
		          (a[1]==a[4]&&a[4]==a[7]&&a[1]=='O')||
		          (a[2]==a[5]&&a[5]==a[8]&&a[2]=='O')||
		          (a[2]==a[4]&&a[4]==a[6]&&a[2]=='O'))
				  {
				  	cout << "You Lose" << endl;
				  	return 0;
				  }
		  
		  if(count==9)
		  {
		  	cout << "Draw" << endl;
		  	return 0;
		  }
	} 
	
	return 0;
}
