#include<iostream>
#include<ctime>
using namespace std;

void roll(int &a,int &b)
{
	srand(time(NULL));
	a = rand()%6+1;
	b = rand()%6+1;
}

int main(void)
{
	int a,b,x;
	
	cout << "Your bet?(1=pass / 0 =no pass): ";
	
	cin >> x;
	
	roll();
}
